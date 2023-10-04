#include "../header/person.h"
Person::Person()
{
    this->name = "";
}
Person::Person(string name)
{
    this->name = name;
}
void Person::accept()
{
    cout << "Enter Name = ";
    cin >> this->name;
}
void Person::display()
{
    cout << "Name = " << this->name << endl;
}