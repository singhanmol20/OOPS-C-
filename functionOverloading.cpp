#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<a+b<<endl;
}
void add(double a, double b){
    cout<<a+b<<endl;
}
int main(){
    add(2.3,5.4);
    add(2,3);
    return 0;
}