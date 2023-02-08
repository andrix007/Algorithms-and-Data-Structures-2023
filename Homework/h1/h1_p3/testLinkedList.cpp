/*
	CH-231-A
	h1_p3.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    List<int> list;
    list.push_front(1);
    list.push_front(2);
    list.push_back(3);
	list.push_back(4);

    cout << "List has "<< list.getSize() << " elements.\n";
	cout << "Element in the front is: " << list.front() << '\n';
	cout << "Element in the back is: " << list.back() << '\n';

    list.push_front(1);
    list.push_back(13);

    cout << "After pushing one element into the front and one into " << "the back,"; 
    cout << " list has "<< list.getSize() << " elements.\n";
	cout << "Element in the front is: " << list.front() << '\n';
	cout << "Element in the back is: " << list.back() << '\n';

    cout << "Popping from front: " << list.pop_front() << '\n';
	cout << "Popping from back: "<< list.pop_back() << '\n';

    cout << "List has "<< list.getSize() << " elements.\n";
	cout << "Element in the front is: " << list.front() << '\n';
	cout << "Element in the back is: " << list.back() << '\n';

    int sz = list.getSize() + 1;
	for (int i = 0; i < sz; i++)
		list.pop_back();

	return 0;
}