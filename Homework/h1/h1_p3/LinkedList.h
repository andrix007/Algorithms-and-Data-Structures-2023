#include <cstddef>
#include <cstdlib>
#include <iostream>

template <class T>
class Node
{
public:
    T value;
    Node* previous = NULL;
    Node* next = NULL;
};

template<class T>
class List
{
    private:
        Node<T>* Front;
        Node<T>* Back;
        int size = 0;
    public:
    //constructor & destructor
        List();
        ~List();
    //methods
        T front();
        T back();
        void push_front(T elem);
        void push_back(T elem);
        T pop_front();
        T pop_back();
    //utility
        int getSize();
};

template <class T>
List<T>::List()
{
    Front = NULL;
    Back = NULL;
    size = 0;
}

template <class T>
T List<T>::front()
{
    return Front->value;
}

template <class T>
T List<T>::back()
{
    return Back->value;
}

template <class T>
void List<T>::push_front(T elem)
{
    Node<T>* newElement = new Node<T>;
    newElement->value = elem;
    newElement->previous = NULL;
    newElement->next = Front;

    if(size == 0)
        Back = newElement;
    else
        Front->previous = newElement;
    
    Front = newElement;
    size++;
}

template <class T>
void List<T>::push_back(T elem)
{
    Node<T>* newElement = new Node<T>;
    newElement->value = elem;
    newElement->previous = Back;
    newElement->next = NULL;

    if(size == 0)
        Front = newElement;
    else
        Back->next = newElement;
    
    Back = newElement;
    size++;
}

template <class T>
T List<T>::pop_front()
{
    if(size == 0)
    {
        std::cout << "Can't pop because the list is empty!\n";
        exit(1);
    }

    T elem = front();

    if(size == 1)
    {
        Front = Back = NULL;
        size = 0;
        return elem;
    }

    Front = Front->next;
    Front->previous = NULL;

    size--;

    return elem;
}

template <class T>
T List<T>::pop_back()
{
    if(size == 0)
    {
        std::cout << "Can't pop because the list is empty!\n";
        exit(1);
    }

    T elem = back();

    if(size == 1)
    {
        Front = Back = NULL;
        size = 0;
        return elem;
    }

    Back = Back->previous;
    Back->next = NULL;

    size--;

    return elem;
}

template <class T>
int List<T>::getSize()
{
    return size;
}

template <class T>
List<T>::~List()
{
    Node<T>* cursor = Front;
    while(cursor->next != NULL)
        {
            Node<T>* temp = cursor->next;
            delete cursor;
            cursor = temp;
        }
}