#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 7;
    cout << "Address of dynamic allocated memory = "<<ptr<<endl;
    cout<<"&ptr Address of ptr = "<<&ptr<<endl;
    cout<<"*ptr value at ptr = "<<*ptr<<endl;
    delete ptr;
    cout<<"value at ptr "<<*ptr<<endl;
    ptr = NULL;
}