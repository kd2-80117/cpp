#include "./cylinder.h"
#include "./menu.h"

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
