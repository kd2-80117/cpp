/*********************************** ASSIGNMENT 9 QUESTION 2 ************************************/

// Q2. Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
// their details from user. Write Menu driven program to deposit/withdraw amount from the account.
// After each transaction display updated account balance. Provide appropriate getters/setters with
// necessary validations. Throw exceptions for invalid values. Also implement an exception class
// InsufficientFunds. In withdraw() member function, if sufficient balance is not available
// in account, throw this exception.

#include <iostream>
using namespace std;
enum account_type
{
    SAVING = 1,
    CURRENT = 2,
    DMAT = 3
};
class insufficient_funds
{
private:
    int accid;
    double cur_balance;
    double withdraw_amount;

public:
    insufficient_funds(int accid, double cur_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->cur_balance = cur_balance;
        this->withdraw_amount = withdraw_amount;
    }
    void display()
    {
        cout << "ERROR : INSUFFICIENT FUND" << endl;
        cout << "Sorry! You can't withdraw ₹" << this->withdraw_amount << " as you have ₹ " << this->cur_balance << " funds in your Bank account." << endl;
    }
    void display2(string type)
    {
        cout << type << " amount cannot be equal to or less than zero." << endl;
    }
};

class Account
{
private:
    int id;
    account_type type;
    double balance;

public:
    Account()
    {
        this->balance = 0;
    }
    Account(int id, account_type type)
    {
        this->id = id;
        this->type = type;
    }
    void accept()
    {

        int choice;
        cout << "Enter id = ";
        cin >> id;
        cout << "Enter Account Type:" << endl;
        cout << "Press 1 for SAVING" << endl;
        cout << "Press 2 for CURRENT" << endl;
        cout << "Press 3 for DMAT" << endl;
        cin >> choice;
        this->type = account_type(choice);
        cout << "Enter Balance = ";
        cin >> this->balance;
    }
    void display()
    {
        cout << "Account id = " << this->id << endl;

        switch (type)
        {
        case SAVING:
            cout << "Account Type = SAVING" << endl;
            break;
        case CURRENT:
            cout << "Account Type = CURRENT" << endl;
            break;
        case DMAT:
            cout << "Account Type = DMAT" << endl;
            break;

        default:
            cout << "Wrong Choice entered" << endl;
            break;
        }
        cout << "Balance = ₹ " << this->balance << endl;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    int get_id()
    {
        return this->id;
    }
    void set_type(account_type(type))
    {
        this->type = type;
    }
    account_type get_type()
    {
        return this->type;
    }
    double get_balance()
    {
        return this->balance;
    }
    void deposit(double amount)
    {
        if (amount <= 0)
            throw insufficient_funds(this->id, this->balance, amount);
        this->balance += amount;
        cout << "Updated balance = ₹ " << this->balance << endl;
    }
    void withdraw(double amount)
    {
        if (amount <= 0)
            throw insufficient_funds(this->id, this->balance, amount);
        if (amount > this->balance)
            throw insufficient_funds(this->id, this->balance, amount);

        this->balance -= amount;
        cout << "Updated balance = ₹ " << this->balance << endl;
    }
};

int menu()
{
    int choice;
    cout << "----------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit Amount" << endl;
    cout << "3. Withdraw Amount" << endl;
    cout << "4. Display Account Details" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "----------------------" << endl;
    return choice;
}
int main()
{
    int size = 5;
    Account *arr[size];
    int choice, id, amt, i = 0;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (i < 5)
            {
                arr[i] = new Account;
                arr[i]->accept();
                i++;
            }
            else
                cout << "Cannot create bank account." << endl;
            break;

        case 2:
            cout << "Enter Account ID = ";
            cin >> id;
            cout << "Enter deposit amount = ";
            cin >> amt;

            for (int i = 0; i < size; i++)
            {
                if (arr[i]->get_id() == id)
                {
                    try
                    {
                        arr[i]->deposit(amt);
                    }
                    catch (insufficient_funds i)
                    {
                        i.display2("Deposit");
                    }
                    break;
                }
                else
                {
                    cout << "Wrong Account No entered..." << endl;
                    break;
                }
            }

            break;
        case 3:
            cout << "Enter Account ID = ";
            cin >> id;

            for (int i = 0; i < size; i++)
            {
                if (arr[i]->get_id() == id)
                {
                    cout << "Enter withdraw amount = ";
                     cin >> amt;
                    
                    try
                    {
                        arr[i]->withdraw(amt);
                    }
                    catch (insufficient_funds i)
                    {
                        i.display();
                        i.display2("Withdraw");
                    }
                    break;
                }
                else
                {
                    cout << "Wrong Account No entered..." << endl;
                    break;
                }
            }
            break;
        case 4:
            cout << "Enter Account ID = ";
            cin >> id;

            for (int i = 0; i < size; i++)
            {
                if (arr[i]->get_id() == id)
                {
                    arr[i]->display();
                    break;
                }
                else
                {
                    cout << "Wrong Account No entered..." << endl;
                    break;
                }
            }
            break;
        default:
            cout << "Wrong choice entered." << endl;
            break;
        }
    }
    for (int j = 0; i < i; j++)
    {
        delete arr[j];
    }

    cout << "Thank you for using our Bank." << endl;
    return 0;
}