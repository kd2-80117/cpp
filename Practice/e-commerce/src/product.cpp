#include "../header/product.h"
int Product::getID()
{
    return this->id;
}
void Product::accept()
{
    cout << "Enter Product ID = ";
    cin >> this->id;
    cout << "Enter Product Name = ";
    cin >> this->product_name;
    cout << "Enter Price = ";
    cin >> this->price;
}
void Product::display()
{
    cout << "-------------------------------------------" << endl;
    cout << "Product ID = " << this->id << endl;
    cout << "Product Name = " << this->product_name << endl;
    cout << "Enter Price = " << this->price << endl;
    cout << "-------------------------------------------" << endl;
}