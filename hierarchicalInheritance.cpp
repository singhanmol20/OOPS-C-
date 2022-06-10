#include<iostream>
using namespace std;

class Shape                
{  
    public:  
    int a;  
    int b;  
    void get_data(int n,int m)  
    {  
        a= n;  
        b = m;  
    }  
};  
class square : public Shape  
{  
    public:  
    int square_area()  
    {  
        int result = a*b;  
        return result;  
    }  
};  
class Triangle : public Shape     
{  
    public:  
    int triangle_area()  
    {  
        float result = 0.5*a*b;  
        return result;  
    }  
};  
int main()  
{  
    square r;  
    Triangle t;  
    int length,base,height;  
    cout << "Enter the length of the side of a square: " << endl;  
    cin>>length;  
    r.get_data(length,length);  
    int m = r.square_area();  
    cout << "Area of the square is : " <<m<< endl;  
    cout << "Enter the base and height of the triangle: " << endl;  
    cin>>base>>height;  
    t.get_data(base,height);  
    float n = t.triangle_area();  
    cout <<"Area of the triangle is : "  << n<<endl;  
    return 0;  
}  