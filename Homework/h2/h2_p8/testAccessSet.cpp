/*
	CH-231-A
	h2_p8.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include <set>
#include "Access.h"

using namespace std;

int main()
{
	Access a;
	
	a.activate(1234,1);
	a.activate(9999,5);
	a.activate(9876,9);

	while(1)
	{
		unsigned int code;	
		cout << "Please enter the code: ";
		cin >> code;

		if(a.isactive(code, 5))
		{
			cout << "Door opened successfully!\n";
			a.deactivate(code);
			break;
		}
		else
		{
			cout << "Nay Nay Incorrect Code Nay Nay!\n";
			cout << "Please try again!\n";
		}
	}
	
	a.activate(9999,8);
	a.activate(1111,7);
	
	while(1)
	{
		unsigned int code;	
		cout << "Please enter the code: ";
		cin >> code;

		if(a.isactive(code, 7))
		{
			cout << "Door opened successfully!\n";
			a.deactivate(code);
			break;
		}
		else
		{
			cout << "Nay Nay Incorrect Code Nay Nay!\n";
			cout << "Please try again!\n";
		}
	}
    return 0;   
}