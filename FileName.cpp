#include <iostream>
using namespace std;

struct Mys
{
	static int a;
};

int Mys::a = 0;

int main()
{
	Mys m;
	for (int j = 0; j < 10; j++)
	{
		m.a++;
		cout << m.a << endl;
	}
}