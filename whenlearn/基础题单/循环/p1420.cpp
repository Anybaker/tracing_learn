#include <iostream>
#include <algorithm>
using namespace std;

int n;
int main()
{
	cin >> n;
	int a[n];
	int l=0,r=0,maxx=1;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(i==0) continue;
		if (a[i]-a[i-1] == 1) r=i;
		else l=i,r=i;
		//cout << "r-l=:" << r-l << endl;
		maxx = max(maxx,r-l+1);	
	}

	cout << maxx;
}
