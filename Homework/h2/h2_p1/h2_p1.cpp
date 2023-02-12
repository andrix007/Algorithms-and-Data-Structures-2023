/*
	CH-231-A
	h2_p1.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <list>
#include <fstream>

using namespace std;

list<int>::iterator next(list<int>::iterator it)
{
    return (++it);
}

void moveFirstListElementToEnd(list<int> l)
{
    int elem = *(l.begin());
    l.pop_front();
    l.push_back(elem);
}

int main()
{
    ofstream out("listB.txt");
    list<int> A, B;
    int x;
    while(1)
    {
        cin >> x;
        if(x <= 0) break;
        A.push_back(x);
        B.push_front(x);
    }

    for(list<int>::iterator it = A.begin() ; it != A.end() ; it++)
        cout << *it << ' ';
    cout << '\n';

    for(list<int>::iterator it = B.begin() ; it != B.end() ; it++)
        out << *it << ' ';

    moveFirstListElementToEnd(A);
    moveFirstListElementToEnd(B);
    
    for(list<int>::iterator it = A.begin() ; it != A.end() ; it++)
    {
        cout << *it;
        if(next(it) == A.end())
            break;
        cout << ", ";
    }
    cout << '\n';

    
    for(list<int>::iterator it = B.begin() ; it != B.end() ; it++)
    {
        cout << *it;
        if(next(it) == B.end())
            break;
        cout << ", ";
    }
    cout << '\n';

    B.sort();
    A.sort();

    A.merge(B);
    A.sort();

    for(list<int>::iterator it = A.begin() ; it != A.end() ; it++)
        cout << *it << ' ';
    cout << '\n';
    return 0;
}