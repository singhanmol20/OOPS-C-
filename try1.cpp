#include <iostream>
#include <math.h>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    void input()
    {
        cout << "Enter the real part of the number" << endl;
        cin >> real;
        cout << "Enter the img part of the complex number (without the i)"
             << "\n";
        cin >> img;
    }
    void output()
    {
        cout << "the complex number is" << endl;
        cout << real << "+" << img << "i" << endl;
    }
    friend complex add(int a, complex);
    friend complex add(complex, complex);
};
complex add(int a, complex s1)
{
    complex temp;
    temp.real = a + s1.real;
    temp.img = s1.img;
    return temp;
}
complex add(complex s1, complex s2)
{
    complex s3;
    s3.real = s1.real + s2.real;
    s3.img = s1.img + s2.img;
    return s3;
}

int main()
{
    complex s1, s2, sum1, sum2;
    int a;
    s1.input();
    s2.input();
    cout << "enter the value of a" << endl;
    cin >> a;
    sum1 = add(a, s2);
    sum2 = add(s1, s2);
    cout << "output for integer with a complex nummber is" << endl;
    sum1.output();
    cout << "output with a complex and a complex number is" << endl;
    sum2.output();
}