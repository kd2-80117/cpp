#ifndef PRODUCT_H
#define PRODUCT_H
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
 int getID();
  void accept();
  void display();
   
};
#endif