#ifndef SELLER_H
#define SELLER_H
#include "../header/person.h"
#include "../header/product.h"

class Seller : public Person, public Product
{
private:
    int id;

public:
    vector<Product *> productList;
    int getID();
   
    void accept();
    
    void display();
   
    void addProduct();
  
    void displayProduct();
   
    int findSellerID(vector<Seller *> &sellerList);
 
};
#endif
