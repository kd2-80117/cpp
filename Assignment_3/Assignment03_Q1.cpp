/************************ ASSIGNMENT 3 QUESTION 1 *********************************/

// Q1. Write a menu driven program to calculate volume of the box(length * width * height).
//     Provide necessary constructors.

#include <iostream>
using namespace std;

class Box
{
    float length;
    float width;
    float height;

public:
    void acceptParameter()
    {
        cout << "Enter length of box: ";
        cin >> length;
        cout << "Enter width of box: ";
        cin >> width;
        cout << "Enter height of box: ";
        cin >> height;
    }
    void displayParameter()
    {
        cout << endl
             << "Length of box is : " << length << endl;
        cout << "Width of box is : " << width << endl;
        cout << "Height of box is : " << height << endl;
    }
    float calVolume()
    {
        return length * width * height;
    }
};

int menu()
{
    int choice;
    cout << endl
         << "********** Menu **********" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Accept Parameters of box" << endl;
    cout << "2. Display Parameters of box" << endl;
    cout << "3. Calculate Volume of box" << endl;
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
    Box b;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            b.acceptParameter();
            break;
        case 2:
            b.displayParameter();
            break;
        case 3:
            volume = b.calVolume();
            cout << endl
                 << "Volume of box is : " << volume << endl;
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