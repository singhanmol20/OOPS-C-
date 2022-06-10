#include <iostream>
using namespace std;

class matrix
{
    int row, col;
    int m[3][3];

public:
    void get()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void output()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    friend matrix transpose(matrix);
};
matrix transpose(matrix m1)
{
    matrix temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp.m[i][j] = m1.m[j][i];
        }
    }
    return temp;
}
int main()
{
    matrix m1, m2;
    m1.get();
    cout << endl;
    m2 = transpose(m1);
    m2.output();
}