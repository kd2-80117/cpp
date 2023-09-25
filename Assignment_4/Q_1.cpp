/********************************** ASSIGNMENT 4 QUESTION 1 ***********************************/

// Q1. Write a class for Time and provide the functionality
// Time()
// Time(int h,int m,int s)
// getHour()
// getMinute()
// getSeconds()
// printTime()
// setHour()
// setMinute()
// setSeconds()
// In main create array of objects of Time.
// Allocate the memory for the array and the object dynamically.

#include <iostream>
using namespace std;

class Time
{
private:
    int h;
    int m;
    int s;

public:
    Time()
    {
        this->h = 0;
        this->m = 0;
        this->s = 0;
    }
    Time(int h, int m, int s)
    {
        this->h = h;
        this->m = m;
        this->s = s;
    }
    int getHour()
    {
        return this->h;
    }
    int getMinute()
    {
        return this->m;
    }
    int getSeconds()
    {
        return this->s;
    }
    void printTime()
    {
        cout << "Time is " << h << ":" << m << ":" << s << endl;
    }
    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    void setSeconds(int s)
    {
        this->s = s;
    }
    void acceptTime()
    {
        cout << "Enter hour:";
        cin >> h;
        setHour(h);
        cout << "Enter minute:";
        cin >> m;
        setMinute(m);
        cout << "Enter seconds:";
        cin >> s;
        setSeconds(s);
    }
};

int main()
{
    Time **t = new Time *[3];
    // t[0] = new Time();
    // t[1] = new Time();

    for (int i = 0; i < 3; i++)
        t[i] = new Time();
    for (int i = 0; i < 3; i++)
        t[i]->acceptTime();
    for (int i = 0; i < 3; i++)
        t[i]->printTime();

    for (int i = 0; i < 3; i++)
        delete t[i];
    delete[] t;
    return 0;
}
