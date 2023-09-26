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
};
void sortRecords(Student arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            
        }
    }
}
int searchRecords(Student arr[], int size)
{
    int key;
    cout << "Enter roll no to search: ";
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
int main()
{
    int arrSize;
    cout << "Enter array size:";
    cin >> arrSize;
    Student arr[arrSize];
    for (int i = 0; i < arrSize; i++)
        arr[i].acceptStudent();

    for (int i = 0; i < arrSize; i++)
        arr[i].printStudent();

    if (int res = searchRecords(arr, arrSize) > -1)
    {
        cout << "Roll no found. Index is " << res << endl;
    }
    else
        cout << "Roll no not found." << endl;

    return 0;
}