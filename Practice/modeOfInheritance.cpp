#include <iostream>
using namespace std;
class base
{
private:
    int bnum1 = 1;

protected:
    int bnum2 = 2;

public:
    int bnum3 = 3;
    void printBase()
    {
        cout << "base bnum1 = " << bnum1 << " ,bnum2 = " << bnum2 << " ,bnum3 = " << bnum3 << endl;
    }
    base()
    {
        cout << "in base constructor" << endl;
    }
    ~base()
    {
        cout << "in base destructor" << endl;
    }
};
class derived : public base
{
private:
    int dnum1 = 1;

protected:
    int dnum2 = 2;

public:
    int dnum3 = 3;
    void printDerived()
    {
        // cout << "base bnum1 = " << bnum1 << " ,bnum2 = " << bnum2 << " ,bnum3 = " << bnum3 << endl;
        cout << "derived dnum1 = " << dnum1 << " ,dnum2 = " << dnum2 << " ,dnum3 = " << dnum3 << endl;
    }
    derived()
    {
        cout << "in derived constructor" << endl;
    }
    ~derived()
    {
        cout << "in derived destructor" << endl;
    }
};
class indirectDerived : public derived
{
private:
    int idnum1 = 1;

protected:
    int idnum2 = 2;

public:
    int idnum3 = 3;
    void printindirectDerived()
    {
        // cout << "base bnum1 = " << bnum1 << " ,bnum2 = " << bnum2 << " ,bnum3 = " << bnum3 << endl;
        // cout << "derived dnum1 = " << dnum1 << " ,dnum2 = " << dnum2 << " ,dnum3 = " << dnum3 << endl;
        cout << "IndirectDerived idnum1 = " << idnum1 << " ,idnum2 = " << idnum2 << " ,idnum3 = " << idnum3 << endl;
    }
    indirectDerived()
    {
        cout << "in indirect derived constructor" << endl;
    }
    ~indirectDerived()
    {
        cout << "in indirect derived destructor" << endl;
    }
};
int main()
{
    // base b1;
    // b1.printBase();
    // derived d1;
    //  b1.bnum3;
    //  b1.bnum1;
    //  b1.bnum2;
    //  d1.bnum1;
    //  d1.bnum2;
    //  d1.bnum3;

    indirectDerived id1;
    // id1.bnum3;
    // id1.bnum1;
    // id1.bnum2;
    // id1.dnum1;
    // id1.dnum2;
    // id1.dnum3;
    // d1.printDerived();

    return 0;
}