#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],b[300005];
#define int long long
signed main()
{

	cin >> n >> m;
	int s=0;
	for(int i=0;i<n;i++){cin>>a[i];s+=a[i];b[i]=-a[i];}
	//Ѱ������Ӷκ�
	int sum=0,maxx=0;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum<0)sum=0;
		maxx = max(sum,maxx);
	} 
	//Ѱ����С�Ӷκ�
	sum = 0;int minn = 0;
	for(int i=0;i<n;i++){
		sum += b[i];
		if(sum<0)sum=0;
		minn = max(sum,minn);
	}//�������յõ�������С�Ӷκ͵ľ���ֵ
	
	if(m>0) {cout << (s-maxx+maxx*m);
	}
	else {cout<< (s+minn-minn*m);
	}
	
	
	return 0;
	
	
} 
