#include <iostream>
using namespace std;

class vehicle
{
	int num;
	static int count;

public:
	vehicle()
	{
		count++;
	}

	void get_regestration()
	{
		cout << "Tell regestration number";
		cin >> num;
		cout << "Reg:" << num << endl;
	}

	static void lol()
	{
		cout << "No of vehicle is\n"
			 << count << endl;
	}

	~vehicle()
	{
		cout << "No of cars is" << count << endl;
		count--;
	}
};

int vehicle::count;

int main()
{
	vehicle v1, v2, v3;
	v1.get_regestration();
	v2.get_regestration();
	vehicle::lol();
	return 0;
}