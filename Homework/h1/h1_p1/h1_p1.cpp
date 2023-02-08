/*
	CH-231-A
	h1_p1.cpp
	Andrei Bancila
	abancila@constructor.university
*/
#include <iostream>
#include "Complex.h"

using namespace std;

template <class T>
int array_search(T v[], int n, T x)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    Complex c[] = {Complex(1, 1), Complex(2, 2), Complex(3, 3), Complex(4, 4), Complex(5, 5)};
    
    cout << array_search(a, 5, 3) << endl;
    cout << array_search(b, 5, 3.3) << endl;
    cout << array_search(c, 5, Complex(3, 3)) << endl;
    return 0;
}