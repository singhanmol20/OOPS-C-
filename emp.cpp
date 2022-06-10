#include <iostream>
using namespace std;
class employee
{
    int eNo;
    char eName[40];
    float basic, da, netSalary, it, gross;

public:
    void getinfo();
    void display();
    void cal(); // gross is (basic + da)
};

void employee ::getinfo()
{
    cout << "enter the name of the employee:" << endl;
    cin >> eName;
    cout << "enter the employee number:" << endl;
    cin >> eNo;
    cout << "enter the basic salary:" << endl;
    cin >> basic;
}
void employee::cal()
{
    da = (52 * basic) / 100;
    it = ((basic + da) * 30) / 100;
    gross = basic + da;
    netSalary = gross - it;
}
void employee::display()
{
    cout << "the name of the employee is: " << eName << endl;
    cout << "employee number: " << eNo << endl;
    cout << "da: " << da << endl;
    cout << "it: " << it << endl;
    cout << "gross: " << gross << endl;
    cout << "net salary: " << netSalary << endl;
}
int main()
{
    int n;
    cout << "enter the number of employee you want: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        employee e1;
        e1.getinfo();
        e1.cal();
        e1.display();
    }
}