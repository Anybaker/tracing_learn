#include <iostream>
#include <cstdio>
using  namespace std;

int n,k;
double nums1,nums2,sums1,sums2;
int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++)
	{
		if(i%k==0) nums1++,sums1+=i;
		else nums2++,sums2+=i;
	}
	double res1,res2;
	res1 = sums1/nums1;
	res2 = sums2/nums2;
	
	printf("%.1lf %.1lf",res1,res2);
	return 0;
 } 
