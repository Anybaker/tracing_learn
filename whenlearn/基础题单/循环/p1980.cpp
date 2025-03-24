#include <iostream>

using namespace std;

int n,x,res;
int main()
{
	cin >> n >> x;
	for(int i=1;i<=n;i++)
	{
		if(i>9)
		{
			int tmp = i;
			while(tmp)
			{
				int help = tmp%10;
				if(help == x) res++;
				tmp /= 10;
			}
		}
		else
		{
			if(i==x) res++;
		}
	}
	
	cout << res;
 } 
