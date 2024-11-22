#include <iostream>

using namespace std;

//从1开始 打印到n*(n+1)/2 输出了对应层数个数字就换行 
int n;
int main()
{
	cin >> n;
	int cnt=0,help=n; 
	for(int i=1,max=n*(n+1)/2;i<=max;i++)
	{
		if(i>9) cout << i,cnt++;
		else cout << 0 << i,cnt++;
		if(cnt==help) printf("\n"),n-=1,help+=n;
		
	}


}
