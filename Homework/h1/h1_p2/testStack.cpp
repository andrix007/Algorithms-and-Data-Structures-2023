/*
	CH-231-A
	h1_p2.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> st;

	for(int i = 1 ; i <= 10 ; i++)
		st.push(i*2);
	
	cout << st.getNumEntries() << '\n';

	cout << "Back of the stack: " << st.back() << '\n';

	int outInt;

	while(st.pop(outInt))
		cout << "Popping: " << outInt << '\n';
    return 0;
}