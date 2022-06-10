#include<iostream>
using namespace std;

class employee{
    protected:
    string empid;
    public:
    void empid_set(){
        cout<<"enter empid"<<endl;
        cin>>empid;
    }
    void get_empid(){
        cout<<"the empid is "<<empid<<endl;
    }
};
class test:public employee{
    protected:
    float firstr,secondr;
    public:
    void set_rating(){
        cout<<"enter the rating obtained in first quarter:"<<endl;
        cin>>firstr;
        cout<<"enter the rating obtained in second quarter:"<<endl;
        cin>>secondr;
    }
    void get_rating(){
        cout<<"the rating is first quarter:"<<firstr<<endl;
        cout<<"the rating is second quarter:"<<secondr<<endl;
    }
};

class anualreport{
    protected:
    int points;
    public:
    void set_point(){
        cout<<"enter the points "<<endl;
        cin>>points;
    }
    void get_point(){
        cout<<"point is"<<points<<endl;
    }
};

class final: public test, public anualreport{
    float frating,overallrating;
    public:
    void display(){
        frating=(firstr+secondr);
        overallrating=(firstr+secondr+points);
        get_rating();
        get_point();
        cout<<"the final rating is:"<<frating<<endl;
        cout<<"the overall rating is "<<overallrating<<endl;
    }
};

int main(){
    final s1;
    s1.empid_set();
    s1.set_rating();
    s1.set_point();
    s1.get_empid();
    s1.display();
    return 0;
}