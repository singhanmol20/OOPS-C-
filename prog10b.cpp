#include<iostream>
using namespace std;
template<class t>
void boublesort(t a[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=n-1;i<j;j--)
        {
            if(a[j]<a[j-1])
                swap(a[j],a[j-1]);
        }
}
}
template<class t>
void swap(t&n,t&n1)
{
    t temp=n;
    n=n1;
    n1=temp;
}
int main()
{
    int a[5]={10,3,4,5,6};
    boublesort<int>(a,5);
    cout<<"sorted arry:";
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
   return 0;
}
