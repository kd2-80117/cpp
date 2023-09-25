/********************************** ASSIGNMENT 3 QUESTION 2 ***********************************/

// Q3. Write a class to find volume of a Cylinder by using following members.
//(volume of Cylinder=3.14 * radius * radius *height)
//(write a menu driven code for it and also use modular approach)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.

#include <iostream>
using namespace std;

class Cylinder
{
    double radius;
    double height;

public:
    // Ctor members initializer list
    Cylinder() : radius(0), height(0)
    {
        // this->radius = 0;
        // this->height = 0;
    }
    // Ctor members initializer list
    Cylinder(double radius, double height) : radius(radius), height(height)
    {
        this->radius = radius;
        this->height = height;
    }
    double getRadius()
    {
        return radius;
    }
    double getHeight()
    {
        return height;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double getVolume()
    {
        return 3.14 * radius * radius * height;
    }
    void printVolume()
    {
        cout << "Cylinder volume is = " << getVolume();
    }
};

enum Emenu
{
    Exit,
    Accept_RADIUS,
    DISPLAY_RADIUS,
    ACCEPT_HEIGHT,
    DISPLAY_HEIGHT,
    CALCULATE_VOLUME
};

Emenu menu()
{
    int choice;
    cout << endl
         << endl
         << "********** Menu **********" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Radius" << endl;
    cout << "2. Display Radius" << endl;
    cout << "3. Accept Height " << endl;
    cout << "4. Display Height" << endl;
    cout << "5. Calculate Volume " << endl;
    cout << "Enter Choice:";
    cin >> choice;
    cout << endl
         << "**************************" << endl;
    return Emenu(choice);
}

int main()
{
    int choice;
    float volume;
    Cylinder c1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            double radius;
            cout << "Enter Radius = ";
            cin >> radius;
            c1.setRadius(radius);
            break;

        case 2:
            cout << endl
                 << "Radius is = " << c1.getRadius() << endl;
            break;
        case 3:
            double height;
            cout << "Enter Height = ";
            cin >> height;
            c1.setHeight(height);
            break;
        case 4:
            cout << endl
                 << "Height is = " << c1.getHeight();
            break;
        case 5:
            c1.printVolume();
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
