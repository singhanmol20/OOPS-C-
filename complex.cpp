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
        cout << "Enter real part" << '\n';
        cin >> real;
        cout << "Enter imaginary part (without writing 'i'): ";
        cin >> img;
    }
    void output()
    {
        cout << real << "+" << img << "i" << '\n';
    }
    friend class comp1;//declaring friend class
    friend complex add(int, complex);
    friend complex add(complex, complex);
};

//freind class
class comp1   //as it is a friend class it can use the data inside the class where it has been declared that is complex class over here
{   public:
    void display(complex c1){
        cout<<"the real part is "<<c1.real<<" imaginary part is "<<c1.img<<endl;
    }
};

complex add(int a, complex s2)// adding real and imaginary number
{
    complex res;
   res.real = s2.real + a;
   res.img = s2.img;
    return res;
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
    comp1 c1;
    int a;
    s1.input();//1st complex number
    s2.input();//2nd complex number
    cout << "First complex number is:" << '\n';
    s1.output();
    cout << "Second complex no is:" << '\n';
    s2.output();
    cout << "Enter the value of a :";
    cin >> a;
    sum1 = add(a, s2);
    sum2 = add(s1, s2);
    cout << "output of integer and complex no is:" << '\n';
    sum1.output();
    cout << "output of complex and complex no is:" << '\n';
    sum2.output();
    cout << "The output using friends class is: "<<endl;
    c1.display(s1);// calling the function from friend class
}