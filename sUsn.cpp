//6 subs, 3 tests

#include <iostream>
using namespace std;

class stud
{
    string usn;
    float marks[6][3];
    float avgm[6];

public:
    void getinfo();
    void display();
    void avg();
};
void stud::getinfo()
{
    for (int i = 0; i < 6; i++)
    {
        cout << "enter the marks in all the three test of subject " << i + 1 << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> marks[i][j];
        }
    }
}

void stud::avg()
{
    for (int i = 0; i < 6; i++)
    {
        int max1, max2;
        max1 = max2 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (marks[i][j] > max1)
            {
                max2 = max1;
                max1 = marks[i][j];
            }
            else if (marks[i][j] > max2)
            {
                max2 = marks[i][j];
            }
        }
        avgm[i]=(max1+max2)/2;
    }
}
// void stud::avg()
// {
//     for (int i = 0; i < 6; i++)
//     {
//         if (marks[i][0] > marks[i][1] && marks[i][0] > marks[i][2])
//         {
//             if (marks[i][1] > marks[i][2])
//             {
//                 avgm[i] = (marks[i][0] + marks[i][1]) / 2;
//             }
//             else
//             {
//                 avgm[i] = (marks[i][0] + marks[i][2]) / 2;
//             }
//         }
//         else
//         {
//             avgm[i] = (marks[i][1] + marks[i][2]) / 2;
//         }
//     }
// }
void stud::display()
{
    for (int i = 0; i < 6; i++)
    {
        cout << "average marks in subject" << i + 1 << ": ";
        cout << avgm[i] << endl;
    }
}
int main()
{
    stud s1;
    s1.getinfo();
    s1.avg();
    s1.display();
}