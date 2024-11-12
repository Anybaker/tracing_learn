#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],b[300005];
#define int long long
signed main()
{

	cin >> n >> m;
	int s=0;
	for(int i=0;i<n;i++){cin>>a[i];s+=a[i];b[i]=-a[i];}
	//寻找最大子段和
	int sum=0,maxx=0;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum<0)sum=0;
		maxx = max(sum,maxx);
	} 
	//寻找最小子段和
	sum = 0;int minn = 0;
	for(int i=0;i<n;i++){
		sum += b[i];
		if(sum<0)sum=0;
		minn = max(sum,minn);
	}//这样最终得到的是最小子段和的绝对值
	
	if(m>0) {cout << (s-maxx+maxx*m);
	}
	else {cout<< (s+minn-minn*m);
	}
	
	
	return 0;
	
	
} 
