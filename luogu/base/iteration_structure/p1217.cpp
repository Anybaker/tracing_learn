#include <iostream>

using namespace std;

bool isPrime(int n)
{
	if(n==2) return true;
	if(n<2) return false;
	if(n%2==0) return false;
	for(int i=3;i<=n/i;i+=2)
	{
		if(n%i==0) return false;
	}
	return true;
}

bool reverseEqual(int n)
{
	int res=0;int tmp = n;
	while(n)
	{
		res *= 10;
		res += n%10;
		n /= 10;
	}
	if(res == tmp) return true;
	return false;
}
int a,b;
int main()
{
	scanf("%d %d",&a,&b);
	if(a%2!=0)
	{
	for(int i=a;i<=b;i+=2)
		{
			if(reverseEqual(i))
			{
				if(isPrime(i)) cout << i << endl;
		    }
		}
	}
	else
	{
	for(int i=a+1;i<=b;i+=2)
		{
			if(reverseEqual(i))
			{
				if(isPrime(i)) cout << i << endl;
		    }
		}
	}
	
}

