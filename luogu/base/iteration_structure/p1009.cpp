#include <iostream>

using namespace std;
# define int unsigned
int n,res,i=1,help=1;
signed main()
{
	cin >> n;
	for(int j=1;j<=n;j++)
	{
		help *= j;
		res += help;
	}
	cout << res;
}
