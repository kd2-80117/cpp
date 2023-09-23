/************************ ASSIGNMENT 2 QUESTION 1 *********************************/

// Q1. Create a namespace NStudent.
//     Create the Student class(created as per assignment-1 Q3) inside namespace.
//     Test the functionalities.

#include <iostream>
using namespace std;

namespace NStudent
{
    class Student
    {
        int roll_no;
        string name;
        float marks;

    public:
        void initStudent()
        {
            roll_no = 101;
            name = "Ritu";
            marks = 100;
        }
        void printStudentOnConsole()
        {
            cout << "******  Student Details *******" << endl;
            cout << "Roll no : " << roll_no << endl;
            cout << "Student Name : " << name << endl;
            cout << "Marks scored : " << marks << endl;
        }
        void acceptStudentFromConsole()
        {
            cout << "Enter Student Details:" << endl;
            cout << "Enter Roll no: " << endl;
            cin >> roll_no;
            cout << "Enter Name: " << endl;
            cin >> name;
            cout << "Enter Marks: " << endl;
            std::cin >> marks;
        }
    };
}

class Student
{
    int roll_no;
    string name;
    float marks;

public:
    void initStudent()
    {
        roll_no = 101;
        name = "Ritu";
        marks = 100;
    }
    void printStudentOnConsole()
    {
        cout << "******  Student Details *******" << endl;
        cout << "Roll no : " << roll_no << endl;
        cout << "Student Name : " << name << endl;
        cout << "Marks scored : " << marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "Enter Student Details:" << endl;
        cout << "Enter Roll no: " << endl;
        cin >> roll_no;
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Marks: " << endl;
        std::cin >> marks;
    }
};

int main()
{
    Student s1;
    int choice = 0;

    do
    {
        cout << endl
             << "***********Menu************" << endl;
        cout << "0.Exit\n1.Initialise Student\n2.Display Student Details\n3.Accept Student Form" << endl;
        cout << "Enter your Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            s1.initStudent();
            break;
        case 2:
            s1.printStudentOnConsole();
            break;
        case 3:
            s1.acceptStudentFromConsole();
        case 0:
            break;
        default:
            break;
        }

    } while (choice);
    return 0;
}