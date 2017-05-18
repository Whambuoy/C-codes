#include <iostream>
using namespace std;

int fib(int n)
{
	if (n>2)
	{
		return fib(n-1) + fib(n-2);
	}
	else if ((n=1) || (n=2))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 8;
	int count = 1;
	while (count<=n)
	{
		cout<<fib(count)<<endl;
		count++;
	}
	return 0;
}