/*
	CH-231-A
	h2_p6.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

map<string, string>m;

int main()
{
    ifstream fin("data.txt");
    string s;
    int index = 0;
    string name;
    string date;
    while(getline(fin, s))
    {
        if(index % 2 == 0)
            name = s;
        else
        {
            date = s;
            m[name] = date;
        }
        index++;
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << "Please enter the person's name whose birthday\n";
        cout << "you want to know: ";
        getline(cin, s);
        if(m.find(s) != m.end())
            cout << "That person's birthday is on: " << m[s] << '\n';
        else
            cout << "Name not found!\n";
    }

    return 0;
}