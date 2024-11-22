#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n)
{
	int res = 0;int flag=0;
	if(n<0) n = fabs(n),flag=1;
	while(n)
	{
		if(n%10==0 && res==0) {n/=10;continue;
		}
		res *= 10;
		res+= n%10;
		n/=10;
	}
	if(flag) return -res;
	return res;
}
int n;
int main()
{
	cin >> n;
	cout << reverse(n);
}
