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
    ~Matrix()
    {
        for (int i = 0; i < length; i++)
        {
            delete arr[i];
        }
        delete[] arr;
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
        cout << endl
             << "Matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void addMatrix(Matrix m2)
    {
        cout << endl
             << "Addition of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {

                cout << arr[i][j] + m2.arr[i][j]
                     << "\t";
            }
            cout << endl;
        }
    }
    void subMatrix(Matrix m2)
    {
        cout << endl
             << "Subtraction of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {

                cout << arr[i][j] - m2.arr[i][j]
                     << "\t";
            }
            cout << endl;
        }
    }
    void mulMatrix(Matrix m2)
    {
        Matrix result;

        cout << endl
             << "Multipilcation of 2 matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                int val = 0;
                for (int k = 0; k < length; k++)
                {
                    val = val + (this->arr[i][k] * m2.arr[k][j]);
                }
                result.arr[i][j] = val;
                cout << result.arr[i][j]
                     << "\t";
            }
            cout << endl;
        }
    }
    void transpose()
    {
        cout << endl
             << "Transpose of matrix is " << endl;
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << arr[j][i] << "\t";
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
    m1.transpose();
}