#include <iostream>
using namespace std;
class op
{
    int x,y,z;

public:
    void getdata(int a, int b, int c)
    {
    x = a;
    y = b;
    z = c;
    }
    void display(void)
    {
    cout << x << " " << y << " "<< z <<endl;
    }
    friend void operator-(op &a);
};

void operator-(op &a)
{
    a.x = -a.x;
    a.y = -a.y;
    a.z = -a.z;
}
int main()
{
 op x;
    x.getdata(4,-6,-9);
    -x;
    cout << "x :";
    x.display();
    return 0;
}