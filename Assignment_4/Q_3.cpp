/********************************** ASSIGNMENT 4 QUESTION 2 ***********************************/

// Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
// parameter-less constructor. Write accept() and print() functions.
// Also provide add(), subtract(), multiply() and transpose() function.

#include <iostream>
using namespace std;

class Matrix
{
    int length;
    int **arr;

public:
    Matrix()
    {
        length = 2;
        arr = new int *[2];
        for (int i = 0; i < length; i++)
        {
            arr[i] = new int[this->length];
        }
    }
    Matrix(int length)
    {
        this->length = length;
        arr = new int *[this->length];
        for (int i = 0; i < length; i++)
        {
            arr[i] = new int[this->length];
        }
    }
    void acceptMatrix()
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << "Enter [" << i << "] [" << j << "] Element : " << endl;
                cin >> arr[i][j];
            }
        }
    }
    void printMatrix()
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }
    void addMatrix(Matrix m2)
    {
        cout << "Addition of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {

                cout << arr[i][j] + m2.arr[i][j]
                     << "  ";
            }
            cout << endl;
        }
    }
    void subMatrix(Matrix m2)
    {
        cout << "Subtraction of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {

                cout << arr[i][j] - m2.arr[i][j]
                     << "  ";
            }
            cout << endl;
        }
    }
    void mulMatrix(Matrix m2)
    {
        cout << "Multipilcation of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {

                cout << (arr[i][i] * m2.arr[i][j]) + (arr[i][j] * arr[j][i])
                     << "  ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int size;
    cout << "Enter size of matrix: ";
    cin >> size;
    Matrix m1(size);
    Matrix m2(size);
    m1.acceptMatrix();
    m1.printMatrix();
    m2.acceptMatrix();
    m2.printMatrix();
    m1.addMatrix(m2);
    m1.subMatrix(m2);
    m1.mulMatrix(m2);
}