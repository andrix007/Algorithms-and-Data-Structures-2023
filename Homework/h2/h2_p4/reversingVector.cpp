/*
	CH-231-A
	h2_p4.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void iterPrint(vector<int> v)
{
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
        cout << *it << ' ';
    cout << '\n';
}

int main()
{
    vector<int>v(30);
    iota(v.begin(),v.end(),1);
    v.push_back(5);
    reverse(v.begin(),v.end());
    iterPrint(v);
    replace(v.begin(),v.end(),5,129);
    iterPrint(v);
    return 0;
}