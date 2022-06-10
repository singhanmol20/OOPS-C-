#include<iostream>
using namespace std;

class student{
    string n;
    int a;
    public:
    student(string i, int j){
        n=i;
        a=j;
        cout<<"name has been initialized"<<endl;
    }
    void display(){
        cout<<"name is "<<n<<endl;
        cout<<"age is "<<a<<endl;
    }
};

class sports{
    int points;
    public:
    sports(int k){
        points=k;
        cout<<"the points scored is"<<points<<endl;
    }
      void display_score(){
            cout<<"points"<<points<<endl;
        }
};
class performance: public student, public sports{
        float cgpa;
        public:
        performance(string i, int j, int k,float m):student(i,j),sports(k){
            cgpa=m;
            cout<<"cgpa got initialised!"<<endl;
        }
        void show_cgpa(){
            cout<<"cgpa:"<<cgpa<<endl;
        }
};
int main(){
    performance p("alex",14,34,2.9);
    p.display();
    p.display_score();
    p.show_cgpa();
}