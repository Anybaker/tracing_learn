#include <iostream>

using namespace std;

//��1��ʼ ��ӡ��n*(n+1)/2 ����˶�Ӧ���������־ͻ��� 
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
