#include "./menu.h"
#include <iostream>
using namespace std;
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
