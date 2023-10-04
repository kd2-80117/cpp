#include "../header/product.h"
#include "../header/seller.h"
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
    int size = 3;
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