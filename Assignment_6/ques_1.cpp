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

        cout << "Enter day = ";
        cin >> day;
        set_day(day);
        cout << "Enter month = ";
        cin >> month;
        set_month(month);
        cout << "Enter year = ";
        cin >> year;
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
};

class Employee
{
    int id;
    float sal;
    string dept;
    Date doj;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    string get_dept()
    {
        return this->dept;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }
    Date get_doj()
    {
        return this->doj;
    }
    void set_doj(Date doj)
    {
        this->doj = doj;
    }
    void acceptEmployee()
    {
        cout << "Enter Employee Details: " << endl;
        cout << "Enter id = ";
        cin >> this->id;
        cout << "Enter salary = ";
        cin >> this->sal;
        cout << "Enter department = ";
        cin >> this->dept;
        cout << "Enter date of joining:" << endl;
        doj.acceptDate();
    }
    void displayEmployee()
    {
        cout << "Employee Details are : " << endl;
        cout << "ID = " << this->id << endl;
        cout << "Salary = " << this->sal << endl;
        cout << "Department = " << this->dept << endl;
        cout << "Date of joining = " << endl;
        doj.displayDate();
    }
};

class Person
{
private:
    string name;
    string addr;
    Date dob;

public:
    Person()
    {
        this->name = "";
        this->addr = "";
    };
    Person(string name, string addr, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->addr = addr;
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_addr()
    {
        return this->addr;
    }
    void set_addr(string addr)
    {
        this->addr = addr;
    }
    Date get_dob()
    {
        return this->dob;
    }
    void set_dob(Date dob)
    {
        this->dob = dob;
    }
    void acceptPerson()
    {
        cout << "Enter Person Details: " << endl;
        cout << "Enter Name = ";
        cin >> this->name;
        cout << "Enter Address = ";
        cin >> this->addr;
        cout << "Enter date of birth:" << endl;
        dob.acceptDate();
    }
    void displayPerson()
    {
        cout << "Person Details are : " << endl;
        cout << "Name = " << this->name << endl;
        cout << "Address = " << this->addr << endl;
        cout << "Date of Birth : " << endl;
        dob.displayDate();
    }
};

int main()
{
    Date d;
    d.acceptDate();
    d.displayDate();
    d.is_leap_year();
    Employee e;
    e.acceptEmployee();
    e.displayEmployee();
    Person p;
    p.acceptPerson();
    p.displayPerson();
    return 0;
}