/*********************************** ASSIGNMENT 8 QUESTION 1 ************************************/

// Q1. Write a class Distance to hold feet and inches. Overload operator + as member function and ==
// operator as friend function. Also, overload ++ operator (to increment inches) as member function
// and -- operator as friend function. Overload << and >> operators to accept and display distance.

#include <iostream>
using namespace std;

class Distance
{
private:
    float feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(float feet, float inches)
    {
        this->feet = feet;
        this->inches = inches;
    }
    Distance operator+(Distance d)
    {
        Distance result;
        result.feet = d.feet + this->feet;
        result.inches = d.inches + this->inches;
        return result;
    }
    void operator++()
    {
        if (this->inches == 11)
        {
            this->feet = this->feet + 1;
            this->inches = 0;
        }
        else
        {
            this->inches = this->inches + 1;
        }
    }

    friend bool operator==(Distance &d1, Distance &d2);
    friend void operator--(Distance &d);
    friend void operator<<(ostream &ab, Distance &d);
    friend void operator>>(istream &ab, Distance &d);

};
bool operator==(Distance &d1, Distance &d2)
{
    return d1.feet == d2.feet && d1.inches == d2.inches;
}
void operator--(Distance &d)
{
    if (d.inches == 0)
    {
        d.feet = d.feet - 1;
        d.inches = 11;
    }
    else
    {
        d.inches = d.inches - 1;
    }
    
}

void operator<<(ostream &ab, Distance &d)
{
    ab << "Distance is feet : " << d.feet << " and " << d.inches << " inches " << endl;
}

void operator>>(istream &ab, Distance &d)
{
    cout << "Enter feet : ";
    ab >> d.feet;
    cout << "Enter inches : ";
    ab >> d.inches;
}

int main()
{

    Distance d1(5, 8);
    Distance d2(5, 8);

    if (d1 == d2)
    {
        cout << "both distance objects are equal." << endl;
        cin >> d1;
    }
    cout << d1;

    ++d1;

    cout << d1;
    --d1;
    cout << d1;
    Distance d3;
    Distance d4;
    Distance d5;
    cout<<"Enter object d4"<<endl;
    cin>>d4;
    cout<<"Enter object d5"<<endl;
    cin>>d5;
    d3 = d4 + d5;
    cout<<"Result of addition is:"<<endl;
    cout << d3;

    return 0;
}