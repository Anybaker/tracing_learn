#include <iostream>

using namespace std;

int n,sum,cnt;
bool isPrime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    for(int i=3;i<=n/i;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
	cin >> n;
	for(int i=1;;i++)
	{
		if(isPrime(i))
		{
			sum += i;
			if(sum<=n) cout << i << endl,cnt++;
			else break;
		}
	}
	cout << cnt;
}
