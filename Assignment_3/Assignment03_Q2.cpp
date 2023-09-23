/************************ ASSIGNMENT 3 QUESTION 2 *********************************/

// Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
// Mostly they do, but sometimes a car goes by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
// collected. Model this tollbooth with a class called tollbooth.
// The two data items are a type unsigned int to hold the total number of cars, and a type double to
// hold the total amount of money collected.
// A constructor initializes all data members to 0. A member function called payingCar() increments
// the car total and adds 0.50 to the cash total. An other function, called nopayCar()
// increments the car total but adds nothing to the cash total. Finally, a member function called
// printOnConsole() displays the two totals and number of paying as well as non paying cars total.
// ( write a menu driven code for it)

#include <iostream>
using namespace std;

class Tollbooth
{
    unsigned int pay_car;
    unsigned int noPay_car;
    double cash;

public:
    Tollbooth()
    {
        this->pay_car = 0;
        this->noPay_car = 0;
        this->cash = 0;
    }
    void payingCar()
    {
        pay_car = pay_car + 1;
        cash = cash + 0.50;
    }
    void nopayCar()
    {
        noPay_car = noPay_car + 1;
    }
    void printOnConsole()
    {
        cout << "Total number of cars gone by = " << pay_car + noPay_car << endl;
        cout << "Total amount of money collected = " << cash << endl;
        cout << "Number of paying cars = " << pay_car << endl;
        cout << "Number of non paying cars = " << noPay_car << endl;
    }
};

int menu()
{
    int choice;
    cout << endl
         << "********** Menu **********" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Pay Toll" << endl;
    cout << "2. NO Toll" << endl;
    cout << "3. Display Details" << endl;
    cout << "Enter Choice:";
    cin >> choice;
    cout << endl
         << "**************************" << endl;
    return choice;
}

int main()
{
    int choice;
    float volume;
    Tollbooth t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.payingCar();
            break;
        case 2:
            t1.nopayCar();
            break;
        case 3:
            t1.printOnConsole();
            break;
        default:
            cout << endl
                 << "Wrong choice Entered :(" << endl;
            break;
        }
    }
    cout << "Thank you for using the Toll app :)" << endl;
    return 0;
}
