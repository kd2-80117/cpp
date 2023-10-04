#include "../header/seller.h"


   
    int Seller::getID()
    {
        return this->id;
    }
    void Seller::accept()
    {
        cout << "Enter Seller id = ";
        cin >> this->id;
        Person::accept();
    }
    void Seller::display()
    {
        cout << "-------------------------------------------" << endl;
        cout << "Seller ID = " << this->id << endl;
        Person::display();
        cout << "-------------------------------------------" << endl;
    }
    void Seller::addProduct()
    {
        Product *pptr;
        pptr = new Product;
        pptr->accept();
        productList.push_back(pptr);
    }
    void Seller::displayProduct()
    {

        for (int i = 0; i < productList.size(); i++)
        {
            productList.at(i)->display();
        }
    }
    int Seller::findSellerID(vector<Seller *> &sellerList)
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
