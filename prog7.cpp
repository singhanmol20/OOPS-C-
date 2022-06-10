#include<iostream>
#include<string>
using namespace std;
class PersonData
{
  char firstName[10],lastName[10],address[50],city[10],state[15];
  int phone;
  public:
  PersonData()
  {
    phone=0;
  }
  void accessor()
  {
    cout<<"Details:\n";
    cout<<firstName<<"\n"<<lastName<<"\n"<<address<<"\n"<<city<<"\n"<<state<<"\n"<<phone<<"\n";
  }
  void mutator()
  {
    cout<<"Enter firstName : ";
    cin>>firstName;
    cout<<"Enter lastName : ";
    cin>>lastName;
    cout<<"Enter address, city , state and phone\n";
    cin>>address>>city>>state>>phone;
  }
};
class CustomerData : public PersonData
{
  char email[15];
  static int customerNumber;
  public:
  CustomerData()
  {
    customerNumber++;
  }
  void accessor()
  {
    PersonData::accessor();
    cout<<email<<endl<<"customerNumber : "<<customerNumber;
  }
  void mutator()
  {
    PersonData::mutator();
    cout<<"Enter Email-id : ";
    cin>>email;
  }
};
int CustomerData::customerNumber=0;
int main()
{
    CustomerData obj;
    obj.mutator();
    obj.accessor();
}

