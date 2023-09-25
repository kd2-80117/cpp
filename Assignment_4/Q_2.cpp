/********************************** ASSIGNMENT 4 QUESTION 2 ***********************************/

// Q2. Stack is a Last-In-First-Out data structure. Write a Stack class.
//     It implements stack using Dynamically allocated array.
//     Stack size should be passed in parameterized constructor.
//     If size is not given, allocate stack of size 5.
//     Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().

#include <iostream>
using namespace std;

class Stack
{
    int size;
    int top;
    int *sptr;

public:
    Stack()
    {
        this->size = 5;
    }
    Stack(int size)
    {
        // this->size = size;
        sptr = new int[this->size];
    }
    ~Stack()
    {
        delete[] this->sptr;
    }
    void push()
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot insert element." << endl;
        }
        else
        {
            int element;
            cout << "Enter element: ";
            cin >> element;
            top = top + 1;
            sptr[top] = element;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot remove element." << endl;
        }
        else
        {
            cout << sptr[top] << " is popped from stack." << endl;
            sptr[top] = 0;
            top = top - 1;
        }
    }
    void peek()
    {
        cout << "The peek element is " << sptr[top] << endl;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty." << endl;
            return false;
        }
    }
    bool isFull()
    {
        if (top == size - 1)
        {
            cout << "Stack is full." << endl;
            return true;
        }
        else
        {
            cout << "Stack is not full" << endl;
            return false;
        }
    }
    void print()
    {

        for (int i = 0; i < size; i++)
        {
            cout << "Stack Element at " << i << " is " << sptr[i] << endl;
        }
    }
};
int menu()
{
    int choice;
    cout << "****** Menu *********" << endl;
    cout << "0. Exit from menu" << endl;
    cout << "1. Initialize Stack" << endl;
    cout << "2. Push Element" << endl;
    cout << "3. Pop Element" << endl;
    cout << "4. Print Element" << endl;
    cout << "5. Peek Element" << endl;
    cout << "6. Is Stack Empty?" << endl;
    cout << "7. Is Stack Full?" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "*********************" << endl;
    return choice;
}
int main()
{
    int size, choice;
    // Stack s1();
    cout << "Enter size of Stack = ";
    cin >> size;
    Stack s1(size);
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 0:
            break;
        case 1:
            // cout << "Enter size of Stack = ";
            // cin >> size;
            // Stack s1(size);
            break;
        case 2:
            s1.push();
            break;
        case 3:
            s1.pop();
            break;
        case 4:
            s1.print();
            break;
        case 5:
            s1.peek();
            break;
        case 6:
            s1.isEmpty();
            break;
        case 7:
            s1.isFull();
            break;

        default:
            cout << "Wrong choice entered." << endl;
            break;
        }
    }
    cout << "Thank you for using the app." << endl;
    return 0;
}