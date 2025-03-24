#include <iostream>

using namespace std;

int a,ans;

int main()
{
	cin >> a;
	while(a>=1)
	{
		ans++;
		a /= 2;
	}
	cout << ans;
}
