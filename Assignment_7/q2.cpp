/*********************************** ASSIGNMENT 7 QUESTION 2 ************************************/

// Q2. A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
// holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
// Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
// should be menu driven and should not cause memory leakage.

#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;
    char type;
    float price;

public:
    float getPrice()
    {
        return this->price;
    }
    void setPrice()
    {
        this->price = price;
    }
    virtual void accept()
    {
        cout << "Enter id = ";
        cin >> id;
        cout << "Enter title = ";
        cin >> title;
        cout << "Enter price = ";
        cin >> price;
        cout << "Enter type[B/T] = ";
        cin >> type;
    }
    void display()
    {
        cout << "ID = " << this->id << endl;
        cout << "Title = " << this->title << endl;
        cout << "Price = " << this->price << endl;
        cout << "Type = " << this->type << endl;
    }
    friend void calculateBill(Product *arr[], int index);
};

class Book : public Product
{
private:
    string author;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter Author = ";
        cin >> author;
    }
    void display()
    {
        Product::display();
        cout << "Author = " << author << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter Artist = ";
        cin >> artist;
    }
    void display()
    {
        Product::display();
        cout << "Artist = " << artist << endl;
    }
};

void calculateBill(Product *arr[], int index)
{
    double bill = 0;
    for (int i = 0; i < index; i++)
    {
        if (arr[i]->type == 'B' || arr[i]->type == 'b')
        {
            bill += arr[i]->price - arr[i]->price * 0.10;
        }
        else
            bill += arr[i]->price - arr[i]->price * 0.05;
    }
    cout << "Total bill = " << bill << endl;
}

int menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Buy Book" << endl;
    cout << "2. Buy Tape" << endl;
    cout << "3. Calculate Bill" << endl;
    // cout << "4. Display only books" << endl;
    // cout << "5. Display only tapes" << endl;
    // cout << "6. Display all Items" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "----------------------" << endl;
    return choice;
}
int main()
{
    // Book b;
    // b.accept();
    // b.display();
    // Tape b;
    // b.accept();
    // b.display();
    Product *arr[3];
    int choice, index = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book;
                arr[index]->accept();
                index++;
            }
            else
                cout << "Cart is Full, Cannot add Book item." << endl;

            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape;
                arr[index]->accept();
                index++;
            }
            else
                cout << "Cart is Full, Cannot add Tape item." << endl;

            break;
        case 3:
            calculateBill(arr, index);
            break;
        // case 4:

        //     break;
        // case 5:

        //     break;
        // case 6:

        //     break;
        default:
            cout << "Wrong choice entered." << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }

    cout << "Thank you for shopping." << endl;
    return 0;
}
