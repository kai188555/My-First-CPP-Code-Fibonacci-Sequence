#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	for (a, b; a < 100 ;)
	{
		cout << a << " ";
		cout << b << " ";
		a += b;
		b += a;
	}
	getchar();
}
