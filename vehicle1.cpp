#include<iostream>
using namespace std;

class vehicle{
    int reg_no;
    static int count;
public:
    vehicle(){
    count++;
    }
    ~vehicle(){
        cout<<"inside destructor"<<endl;
        count--;
        cout<<"count: "<<count<<endl;
    }
    void set_regno(int a){
        reg_no=a;
    }
    int get_regno(){
        return reg_no;
    }
    static int get_vehicleCount(){
        return count;
    }
   
};
int vehicle::count;

int main(){
    vehicle v1,v2;
    int a;
    cout<<"enter the registeration number: ";
    cin>>a;
    v1.set_regno(a);
    int p= v1.get_regno();
    cout<<"registeration number is: "<<p<<endl;
    cout<<"enter the registeration number: ";
    cin>>a;
    v2.set_regno(a);
    int q=v2.get_regno();
    cout<<"registeration number is: "<<q<<endl;
    int c = vehicle::get_vehicleCount();
    cout<<"count: "<<c<<endl;
}