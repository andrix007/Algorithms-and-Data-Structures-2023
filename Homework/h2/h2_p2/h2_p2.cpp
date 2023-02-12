/*
	CH-231-A
	h2_p2.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <deque>

using namespace std;

void print(deque<float> d)
{
    for(int i = 0 ; i < d.size() ; i++)
        cout << d[i] << ' ';
    cout << '\n';
}

deque<float>::iterator previous(deque<float>::iterator it)
{
    return (--it);
}

int main()
{
    deque<float>A;
    int x = 0;
    while(1)
    {
        cin >> x;
        if(x == 0)
            break;
        if(x > 0)
            A.push_back(x);
        else
            A.push_front(x);
    }
    print(A);
    for(deque<float>::iterator it = A.begin() ; it != A.end() ; it++)
    {
        if((*previous(it)) < 0 && (*it) > 0)
            A.insert(it, 0);
    }

    for(int i = 0 ; i < A.size() ; i++)
    {
        if(i == A.size()-1)
        {
            cout << A[i];
            break;
        }
        cout << A[i] << "; ";
    }
    cout << '\n';
    return 0;
}