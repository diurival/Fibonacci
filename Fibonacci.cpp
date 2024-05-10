#include <iostream>

using namespace std;

class Fibonacci
{
	static int datos[100];

public:
	static int getDato(int n);
};

int Fibonacci::datos[]{ 0 };

int Fibonacci::getDato(int n)
{
	if (n == 1 || n == 2)
		return 1;
	if (datos[n] == 0)
		datos[n] = getDato(n - 1) + getDato(n - 2);
		return datos[n];
}

int main()
{
	for (int n = 50; n > 0; n--)
	{
		cout << n << "= ";
		cout << Fibonacci::getDato(n) << endl;
	}
}