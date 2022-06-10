#include<iostream>
using namespace std;
template<class t>
class arr
{
    public:
    t *a;
    int n;
    arr(int x)
    {
        n=x;
        a=new t[n];
    }
    void read()
    {
        cout<<"enter elements:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"elements:";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    t maxi()
    {
        t max=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]>max)
            max=a[i];
       }
       return max;
    }
    t mini()
    {
        t min=a[0];
       for(int i=0;i<n;i++)
       {
           if(a[i]<min)
            min=a[i];
       }
       return min;
    }
    arr operator+(arr &a1)
    {
        arr<t> res(n+a1.n);
        for(int i=0;i<n;i++)
            res.a[i]=a[i];
        int j=0;
        for(int i=n;i<res.n;i++)
        {
            res.a[i]=a1.a[j];
            j++;
        }
    return res;

    }
};
int main()
{
    arr<int> a(5);
    arr<int> b(5);
    arr<char> c(5);
    a.read();
    b.read();
    c.read();
    b=a+b;
    b.display();
    cout<<"\n"<<b.maxi()<<endl;
    cout<<b.mini()<<endl;
    cout<<c.maxi()<<endl;
}

