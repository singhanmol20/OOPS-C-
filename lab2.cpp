#include <iostream>
using namespace std;
class FLOAT
{
    float t;

public:
    FLOAT(float t){
        this->t = t;
    }

    float operator+(FLOAT F){
        return (t + F.t);
    }

    float operator-(FLOAT F){
        return (t - F.t);
    }

    float operator*(FLOAT F){
        return (t * F.t);
    }

    float operator/(FLOAT F){
        return (t / F.t);
    }
};

int main()
{
    FLOAT a1(13.14), a2(64.93);

    cout << " Operator * : " << a1 * a2<<endl;
    cout << " Operator / : " << a1 / a2<<endl;
    cout << " Operator + : " << a1 + a2<<endl;
    cout << " Operator - : " << a1 - a2<<endl;

    return 0;
}