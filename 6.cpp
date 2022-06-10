/*Write a C++ program to create a class called MATRIX using a two-dimensional array of
integers. Implement the following operations by overloading the operator = = which checks
the compatibility of two matrices m1 and m2 to be added and subtracted. Perform the
addition and subtraction by overloading the operators + and – respectively. Display the
results (sum matrix m3 and difference matrix m4).*/

#include <iostream>
using namespace std;
class matrix
{
    int m[10][10];
    int r, c;

public:
    matrix()
    {
        int i, j;
        r = c = 2;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                m[i][j] = 0;
            }
        }
    }
    matrix(int row, int col)
    {
        int i, j;
        r = row;
        c = col;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                m[i][j] = 0;
            }
        }
    }

    void read()
    {
        int i, j;
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                cin >> m[i][j];
    }
    void display()
    {
        int i, j;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }
        cout << "\n";
    }
    friend matrix   operator+(matrix m1, matrix m2);
    friend matrix operator-(matrix m1, matrix m2);
    friend int operator == (matrix m1,matrix m2);
    
};
int operator ==(matrix m1,matrix m2)
{
    if(m1.r==m2.r && m1.c==m2.c)
    return 1;
    return 0;
}


matrix operator+(matrix m1, matrix m2)
{
    matrix res;
    int i, j;
    for (i = 0; i < m1.r; i++)
        for (j = 0; j < m1.c; j++)
            res.m[i][j] = m1.m[i][j] + m2.m[i][j];
    return res;
}
matrix operator-(matrix m1, matrix m2)
{
    matrix res;
    int i, j, k;
    if ((m1 == m2)-1)
        cout << "These matrices cannot be added\n";
    else
    {
        for (i = 0; i < m1.r; i++)
            for (j = 0; j < m1.c; j++)
                res.m[i][j] = m1.m[i][j] - m2.m[i][j];
    }
    return res;
}
int main()
{
    matrix m1,m2(2,2),m3,m4;
    m1.read();
    m2.read();
    if(m1==m2)
    {
        cout<<"yes"<<endl;
    }
    m3=m1+m2;
    m4=m1-m2;
    m3.display();
    m4.display();
}

