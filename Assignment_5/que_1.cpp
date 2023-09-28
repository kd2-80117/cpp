/********************************** ASSIGNMENT 5 QUESTION 1 ***********************************/

// Q1. Write a menu driven program for Student management.
// In main(), create Array of Objects and provide facility for accept, print, search and sort.
// For student accept name, gender, rollNumber and marks of three subjects from user and print name,
// rollNumber, gender and percentage.
// Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
// sorting and searching array.
// Search function returns index of found Student, otherwise returns -1.

#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    string gender;
    float marks[3];

public:
    void acceptStudent()
    {
        cout << "Enter Student Details:" << endl;
        cout << "Enter roll no: ";
        cin >> this->rollno;
        cout << "Enter name:";
        cin >> this->name;
        cout << "Enter gender:";
        cin >> this->gender;
        cout << "Enter marks:";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
    void printStudent()
    {
        cout << endl
             << "**** Student Details *****" << endl;
        cout << "Roll no : " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        for (int i = 0; i < 3; i++)
            cout << "Marks of " << i + 1 << " subject: " << marks[i] << endl;
        percentage();
    }
    float percentage()
    {
        int sum = 0;
        float per;
        for (int i = 0; i < 3; i++)
            sum += marks[i];
        per = sum / 3;
        cout << "Percentage is " << per << endl;
        return per;
    }
    int getRollno()
    {
        return this->rollno;
    }
    // friend void sortRecords(Student arr[], int size);
};
// void sortRecords(Student arr[], int size)
// {

//     for (int i = 0; i <= size - 2; i++)
//     {
//         int min = i;
//         for (int j = i; j <= size - 1; j++)
//         {
//             if (arr[j].rollno < arr[min].rollno)
//             {
//                 min = j;
//             }
//         }
//         Student temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }
void sortRecords(Student arr[], int size)
{

    for (int i = 0; i <= size - 2; i++)
    {
        int min = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j].getRollno() < arr[min].getRollno())
            {
                min = j;
            }
        }
        Student temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int searchRecords(Student arr[], int size)
{
    int key;
    cout << endl
         << "Enter roll no to search: ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].getRollno() == key)
        {

            return i;
        }
    }
    return -1;
}
int menu()
{
    int choice;
    cout << endl
         << endl
         << "********** Menu **********" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Student" << endl;
    cout << "2. Print Student" << endl;
    cout << "3. Search Roll no" << endl;
    cout << "4. Sorting" << endl;
    cout << "Enter Choice:";
    cin >> choice;
    cout << endl
         << "**************************" << endl;
    return choice;
}
int main()
{

    int choice;
    int arrSize;
    int res;
    cout << "Enter array size:";
    cin >> arrSize;
    Student arr[arrSize];

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            for (int i = 0; i < arrSize; i++)
                arr[i].acceptStudent();

            break;

        case 2:
            cout << endl
                 << "Student Details are" << endl;
            for (int i = 0; i < arrSize; i++)
                arr[i].printStudent();
            break;
        case 3:
            res = searchRecords(arr, arrSize);
            if (res != -1)
            {
                cout << endl
                     << "Roll no found. Index is " << res << endl;
            }
            else
                cout << endl
                     << "Roll no not found." << endl;
            break;
        case 4:
            sortRecords(arr, arrSize);
            cout << endl
                 << "Sorted Student Details are" << endl;
            for (int i = 0; i < arrSize; i++)
                arr[i].printStudent();
            break;

        default:
            cout << endl
                 << "Wrong choice Entered :(" << endl;
            break;
        }
    }
    cout << "Thank you for using the app :)" << endl;
    return 0;
}