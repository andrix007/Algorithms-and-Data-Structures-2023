/*
	CH-231-A
	h1_p4.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> v;

vector<string>::iterator nextIterator(vector<string>::iterator it)
{
    return (++it);
}

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(s == "END")
            break;
        
        v.push_back(s);
    }

    for(int i = 0 ; i < v.size() ; i++)
        cout << v[i] << ' ';
    cout << '\n';

    for(vector<string>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it;
        if(next(it) == v.end())
            break;
        cout << ", ";
    }
    cout << '\n';
    return 0;
}