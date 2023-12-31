/*********************************** ASSIGNMENT 7 QUESTION 3 ************************************/

// Q3. Using the Q1 from assignment 6. Create an array of 10 employees. Provide menu driven code
// for the functionalities: Insted of char[] use string datatype
// 1. Accept Employee
// 2. Display the count of all employees with respect to
// designation
// 3. Display respective designation employees

// ------------------------------------    ALGORITHM    --------------------------------------

// Employee -> string designation = "manager" OR "salesman" OR "salesmanger"
// 1. Accept Employee
// a. Accept manager -> new manager() -> {this->designation = "manager"}
// b. Accept SalesMan -> new salesman() -> {this->designation = "salesman"}
// c. Accept SalesManager -> new SalesManager() -> {this->designation = "SalesManager"}
// 2. Display the count of all employees with respect to designation
// expected output
// manager - 3
// salesman - 4
// salesmanger - 3
// 3. Display respective designation employees
// manager
// salesman
// salesmanager for(){ if(designation = "") }
// display all employees

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

protected:
    string designation;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
        this->designation = "";
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
        // this->designation = designation;
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
    string get_designation()
    {
        return this->designation;
    }
    void set_designation(string designation)
    {
        this->designation = designation;
    }
    virtual void accept()
    {
        cout << endl
             << "Enter id = ";
        cin >> this->id;
        cout << "Enter salary = ";
        cin >> this->sal;
        // cout << "Enter designation = ";
        // cin >> this->designation;
    }
    virtual void display()
    {

        cout << "ID = " << this->id << endl;
        cout << "Salary = " << this->sal << endl;
        cout << "Designation = " << this->designation << endl;
    }
    virtual ~Employee()
    {

    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        this->bonus = 0;
        designation = "manager";
    }
    Manager(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->bonus = bonus;
        designation = "manager";
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }

    virtual void accept()
    {
        Employee::accept();
        accept_manager();
    }
    virtual void display()
    {
        Employee::display();
        cout << "Bonus = " << this->bonus << endl;
    }

protected:
    void accept_manager()
    {
        cout << "Enter bonus = ";
        cin >> this->bonus;
    }
    void display_manager()
    {
        cout << "Bonus = " << this->bonus << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        this->comm = 0;
        // set_designation("salesman");
        designation = "salesman";
    }
    Salesman(int id, float sal, float comm) : Employee(id, sal)
    {
        this->comm = comm;
        // set_designation("salesman");
        designation = "salesman";
    }
    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }

    virtual void accept()
    {
        Employee::accept();
        accept_salesman();
    }
    virtual void display()
    {
        Employee::display();
        cout << "comm = " << this->comm << endl;
    }

protected:
    void accept_salesman()
    {
        cout << "Enter Commission = ";
        cin >> this->comm;
    }
    void display_salesman()
    {
        cout << "comm = " << this->comm << endl;
    }
};

class Sales_manager : public Manager, public Salesman
{
private:
public:
    Sales_manager()
    {
        designation = "salesmanager";
    }
    Sales_manager(int id, float sal, string designation, float bonus, float comm) : Manager(id, sal, bonus), Salesman(id, sal, comm)
    {
        // set_designation("salesmanager");
        designation = "salesmanager";
    }

    void accept()
    {

        Employee::accept();
        Manager::accept_manager();
        Salesman::accept_salesman();
    }
    void display()
    {

        Employee::display();
        Manager::display_manager();
        Salesman::display_salesman();
    }
};
char subMenu1()
{
    char choice;
    cout << "0. Back to Main Menu" << endl;
    cout << "a. Accept Manager" << endl;
    cout << "b. Accept Salesman" << endl;
    cout << "c. Accept SalesManager" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
char subMenu2()
{
    char choice;
    cout << "0. Back to Main Menu" << endl;
    cout << "a. Display Managers" << endl;
    cout << "b. Display Salesmans" << endl;
    cout << "c. Display SalesManagers" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
int menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Employee" << endl;
    cout << "2. Display count of Employees w.r.t designation" << endl;
    cout << "3. Display Employees w.r.t designation" << endl;
    cout << "4. Display all Employees" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "----------------------" << endl;
    return choice;
}
int main()
{
    Employee *arr[10];
    int mcount = 0;
    int scount = 0;
    int smcount = 0;
    int choice, choice1, choice2, index = 0;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            choice1 = subMenu1();
            switch (choice1)
            {

            case 'a':
                if (index < 10)
                {
                    arr[index] = new Manager;
                    arr[index]->accept();
                    index++;
                    mcount++;
                }
                else
                    cout << "Array is Full, Cannot add Manager." << endl;

                break;
            case 'b':
                if (index < 10)
                {
                    arr[index] = new Salesman;
                    arr[index]->accept();
                    index++;
                    scount++;
                }
                else
                    cout << "Array is Full, Cannot add Salesman." << endl;

                break;
            case 'c':
                if (index < 10)
                {
                    arr[index] = new Sales_manager;
                    arr[index]->accept();
                    index++;
                    smcount++;
                }
                else
                    cout << "Array is Full, Cannot add Sales Manager." << endl;

                break;
            default:
                break;
            }

            break;

        case 2:
            // mcount = 0;
            // scount = 0;
            // smcount = 0;

            // for (int i = 0; i < index; i++)
            // {
            //     if (arr[i]->get_designation() == "manager")
            //     {
            //         mcount++;
            //     }
            //     else if (arr[i]->get_designation() == "salesman")
            //     {
            //         scount++;
            //     }
            //     else if (arr[i]->get_designation() == "salesmanager")
            //     {
            //         smcount++;
            //     }
            // }
            cout << "Count of Manager = " << mcount << endl;
            cout << "Count of Salesman = " << scount << endl;
            cout << "Count of Sales Manager = " << smcount << endl;

            break;
        case 3:
            choice2 = subMenu2();
            switch (choice2)
            {

            case 'a':
                for (int i = 0; i < index; i++)
                {
                    if (arr[i]->get_designation() == "manager")
                    {
                        cout << "----------------------" << endl;
                        arr[i]->display();
                    }
                }
                break;

            case 'b':
                for (int i = 0; i < index; i++)
                {
                    if (arr[i]->get_designation() == "salesman")
                    {
                        cout << "----------------------" << endl;
                        arr[i]->display();
                    }
                }
                break;

            case 'c':

                for (int i = 0; i < index; i++)
                {
                    if (arr[i]->get_designation() == "salesmanager")
                    {
                        cout << "----------------------" << endl;
                        arr[i]->display();
                    }
                }
                break;

            default:
                break;
            }

            break;

        case 4:
            for (int i = 0; i < index; i++)
            {
                cout << "----------------------" << endl;
                arr[i]->display();
            }
            break;
        default:
            cout << "Wrong choice entered." << endl;
            break;
        }
    }
    if (arr != NULL)
    {

        for (int i = 0; i < index; i++)
        {
            delete arr[i];
        }
    }

    cout << "Thank you for using our app." << endl;
    return 0;
}
                                                   