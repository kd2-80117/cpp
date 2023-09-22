/************************ ASSIGNMENT 1 QUESTION 2 using Structure *********************************/

// Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
// Date is having data members day, month, year. Implement the following functions.
// void initDate();
// void printDateOnConsole();
// void acceptDateFromConsole();
// bool isLeapYear();

#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    void printDateOnConsole()
    {
        cout << "Date is :" << day<<"-"<< month<<"-"<< year;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter day,month and year:" << endl;
        cin >> day >> month >> year;
    }

    bool isLeapYear()
    {
        if ((year % 400 == 0) && !(year % 100 == 0) || (year % 4 == 0))
            return true;
        else
            return false;
    }
};
int main()
{
    struct Date dt;

    int choice = 0;
    do
    {
        cout << "\nMenu\n1.Initial Date\n2.Print Date\n3.Accept Date\n0.Exit\nEnter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            break;
        case 1:
            dt.initDate();
            break;
        case 2:
            dt.printDateOnConsole();
            break;
        case 3:
            dt.acceptDateFromConsole();
            break;
        case 4:
            if (dt.isLeapYear())
                cout << dt.year << " is a leap year" << endl;
            else
                cout << dt.year << " is not a leap year" << endl;
        default:
            break;
        }
    } while (choice);

    return 0;
}