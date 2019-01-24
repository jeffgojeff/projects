#include <iostream>
using namespace std;

void fib();

int main()
{
	cout << "The Fibonacci Sequence Is: " << endl;
	fib();

	return 0;
}

void fib()
{
	int n = 1;
	for (int i = 0; i < 1000000; i += n)
	{
		cout << i << endl;
		n += i;
		cout << n << " " << endl;
	}
}