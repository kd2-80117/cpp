#include <iostream>
#include <vector>
using namespace std;
class Product
{
private:
    int id;
    string product_name;
    float price;

public:
    int getID()
    {
        return this->id;
    }
    void accept()
    {
        cout << "Enter Product ID = ";
        cin >> this->id;
        cout << "Enter Product Name = ";
        cin >> this->product_name;
        cout << "Enter Price = ";
        cin >> this->price;
    }
    void display()
    {
        cout << "-------------------------------------------" << endl;
        cout << "Product ID = " << this->id << endl;
        cout << "Product Name = " << this->product_name << endl;
        cout << "Enter Price = " << this->price << endl;
        cout << "-------------------------------------------" << endl;
    }
};

class Person
{
private:
    string name;

public:
    Person()
    {
        this->name = "";
    }
    Person(string name)
    {
        this->name = name;
    }
    void accept()
    {
        cout << "Enter Name = ";
        cin >> this->name;
    }
    void display()
    {
        cout << "Name = " << this->name << endl;
    }
};

class Seller : public Person, public Product
{
private:
    int id;

public:
    vector<Product *> productList;
    int getID()
    {
        return this->id;
    }
    void accept()
    {
        cout << "Enter Seller id = ";
        cin >> this->id;
        Person::accept();
    }
    void display()
    {
        cout << "-------------------------------------------" << endl;
        cout << "Seller ID = " << this->id << endl;
        Person::display();
        cout << "-------------------------------------------" << endl;
    }
    void addProduct()
    {
        Product *pptr;
        pptr = new Product;
        pptr->accept();
        productList.push_back(pptr);
    }
    void displayProduct()
    {

        for (int i = 0; i < productList.size(); i++)
        {
            productList.at(i)->display();
        }
    }
    int findSellerID(vector<Seller *> &sellerList)
    {
        int id;
        cout << "Enter seller id = ";
        cin >> id;
        for (int i = 0; i < sellerList.size(); i++)
        {
            if (sellerList.at(i)->getID() == id)
                return i;
        }
        return -1;
    }
};


int menu()
{

    int choice;
    cout << "-------------------------------------------" << endl;
    cout << "1. Add Seller" << endl;
    cout << "2. Add Product" << endl;
    cout << "3. Display products sold by specific seller" << endl;
    cout << "4. Display all Sellers" << endl;
    cout << "5. Display all Products" << endl;
    cout << "Enter choice = ";
    cin >> choice;
    cout << "-------------------------------------------" << endl;
    return choice;
}

int main()
{
    int choice;
    int index = 0;
    int sid;
    vector<Seller *> sellerList;
    // vector<Product *> allproductList;
    Seller *sptr;

    while (((choice = menu()) != 0))
    {
        switch (choice)
        {
        case 1:
        {
            sptr = new Seller;
            sptr->accept();
            sellerList.push_back(sptr);
            index++;
        }
        break;
        case 2:

            sellerList.at(sptr->findSellerID(sellerList))->addProduct();

            break;
        case 3:
            sellerList.at(sptr->findSellerID(sellerList))->displayProduct();

            break;
        case 4:
            for (int i = 0; i < sellerList.size(); i++)
            {
                sellerList.at(i)->display();
            }

            break;

        case 5:

            for (int i = 0; i < sellerList.size(); i++)
            {
                for (int j = 0; j < sellerList.at(i)->productList.size(); j++)
                {
                    sellerList.at(i)->productList.at(j)->display();
                }
            }

            break;

        default:
            break;
        }
    }
    cout << "Thank you for using the App...:)" << endl;
    return 0;
}