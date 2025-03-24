#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
int n,s,a,b;
signed main()
{

	cin >> n >> s;
	int to_use,sum=0;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		if(i==0){
			sum += a*b;
			to_use = a;
			continue;
		}
		to_use = min(to_use+s,a);
		sum += to_use*b;
	}
	cout << sum;
 } 
