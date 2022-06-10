#include<iostream>
using namespace std;
class expression
{
    int a,d;
public:
    void read()
    {
        cin>>a>>d;
    }
    void exp()
    {
        if(d==0)
        {
            throw 0;
        }
            cout<<a/d;
    }
};
int main()
{
    expression e1;
    e1.read();
    while(true)
    {
        try{
            e1.exp();
            break;
           }
           catch(int &e)
           {
               cout<<"divide by zero\n";
               e1.read();
           }
    }
    return 0;
}
