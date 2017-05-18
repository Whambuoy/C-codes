#include <iostream>
using namespace std;

int ans;
int factorial(int n);
int main()
{
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	cout<<factorial(n);
	return 0;
}
int factorial(int n)
{
	
	if (n>1)
	{
	 ans = (n * factorial(n-1)); 	
	}
		else
	{
		ans = 1;
	}
	
	return ans;
	
}