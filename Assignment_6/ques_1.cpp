/*********************************** ASSIGNMENT 6 QUESTION 1 ************************************/

// Q1. Implement following classes. Test all functionalities in main().

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    };
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day = day;
    }
    int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month = month;
    }
    int get_year()
    {
        return this->year;
    }
    void set_year(int year)
    {
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter Date:" << endl;
        cout << "Enter day = ";
        set_day(day);
        cout << "Enter month = ";
        set_month(month);
        cout << "Enter year = ";
        set_year(year);
    }
    void displayDate()
    {
        cout << "Date is " << get_day() << "/" << get_month() << "/" << get_year() << endl;
    }
    bool is_leap_year()
    {
        if ((year % 400 == 0) && !(year % 100 == 0) || year % 4 == 0)
        {
            cout << year << " is a leap year" << endl;
            return true;
        }
        else
        {
            cout << year << " is not a leap year" << endl;
            return false;
        }
    }

    ~Date();
};

class Employee
{
    int id;
    float sal;
    string dept;
};