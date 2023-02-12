#include <cassert>
#include <iostream>

using namespace std;

template<class T, int initialsize = 10>
class Stack
{
    private:
        T* v; //pointer to the contiainer
        int n; //size  of container
        int top; //index of the top element

    public:
    //constructors
        Stack(); //default constructor
        Stack(const Stack<T>& other); //copy constructor
        Stack(int n); // constructor with size

    //destructor
        ~Stack(); //destructor

    //functions
        bool push(T elem);
        bool pop(T& out);
        T back(void);
        int getNumEntries();
};

template<class T, int initialsize>
Stack<T, initialsize>::Stack()
{
    v = new T[initialsize];	// creates a vector of the given size
    n = initialsize;
    top = -1;
}

template<class T, int initialsize>
Stack<T, initialsize>::Stack(const Stack<T>& other)
{
    v = new T[other.n];
    n = other.n;
    top = other.top;
        
    for(int i = 0 ; i < n ; i++)
        v[i] = other.v[i];
}

template<class T, int initialsize>
Stack<T, initialsize>::Stack(int n)
{
    v = new T[n];
    this->n = n;
    top = -1;
}

template<class T, int initialsize>
Stack<T, initialsize>::~Stack()
{
    delete[] v;			// deallocate memory
}

template<class T, int initialsize>
bool Stack<T, initialsize>::push(T elem)
{
    if (top + 1 == n)	 
        return false;		

    top++;				
    v[top] = elem;

	std::cout << "Pushing " << elem << "\n";

    return true;
}

template<class T, int initialsize>
bool Stack<T, initialsize>::pop(T& out)
{
    if (top < 0)   
        return false;   

    out = v[top--];  
	
    return true;
}

template<class T, int initialsize>
T Stack<T, initialsize>::back()
{
    if(top == -1)
        exit(1);
    
    return v[top];
}

template<class T, int initialsize>
int Stack<T, initialsize>::getNumEntries()
{
    return top+1;
}
