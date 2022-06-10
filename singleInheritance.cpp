#include<iostream>
using namespace std;

class employee{
    public:
    int salary;
    void set_salary(int n){
        salary=n;
    }
};
class total:public employee{
    public:
    int appraisal;
    void set_appraisal(int n){
        appraisal=n;
    }
};

int main(){
    total t1;
    t1.set_salary(50000);
    t1.set_appraisal(5000);
    cout<<"the total salary now is: "<<t1.salary+t1.appraisal<<endl;
    return 0;
}