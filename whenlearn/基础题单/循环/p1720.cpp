#include <iostream>
#include <cstdio>

using namespace std;

int n;	double a=0,b=1;
int main()
{
	cin >> n;
	for(int i=1;i<n;i++)
	{
		b = a + b;
		a = b - a;
	}
	printf("%.2f",b);
} 
