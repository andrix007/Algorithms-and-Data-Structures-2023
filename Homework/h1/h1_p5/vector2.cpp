/*
	CH-231-A
	h1_p5.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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

    if(v.size() >= 5)
        swap(v[1],v[4]);
    else
        cout << "Swapping impossible!\n";

    v[v.size()-1] = "???";

    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i];
        if(i == v.size()-1) 
            break;
        cout << ", ";
    }
    cout << '\n';

    for(vector<string>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it;
        if(next(it) == v.end())
            break;
        cout << "; ";
    }
    cout << '\n';

    for(vector<string>::reverse_iterator rit = v.rbegin(); rit != v.rend() ; rit++)
        cout << *rit << ' ';
    cout << '\n';
    
    return 0;
}