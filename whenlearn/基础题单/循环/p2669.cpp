#include <iostream>

using namespace std;

int k,res,cnt;
int main()
{
	cin >> k;
	for(int i=1;;i++)
	{
		cnt+=i;
		if(cnt<=k)
		{
			int tmp = i;
			while(tmp) 
			{
				res += i;
				tmp--;
			}
		}
		else
		{
			cnt = cnt-i;
			int help = k-cnt;
			while(help)
			{
				res += i;
				help--;
			}
			break;
		}
	}
	cout << res;
}
