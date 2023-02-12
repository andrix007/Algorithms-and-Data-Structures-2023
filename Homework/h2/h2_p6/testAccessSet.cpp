/*
	CH-231-A
	h2_p6.cpp
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
	a.activate(1234);
	a.activate(9999);
	a.activate(9876);

	while(1)
	{
		unsigned int code;	
		cout << "Please enter the code: ";
		cin >> code;

		if(a.isactive(code))
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
	
	a.deactivate(9999);
	a.activate(1111);
	
	while(1)
	{
		unsigned int code;	
		cout << "Please enter the code: ";
		cin >> code;

		if(a.isactive(code))
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