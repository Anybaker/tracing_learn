#include <cstdio>
#define int long long

int a[100],i,use;

signed main()
{
    while(1)
    {
        scanf("%d",&use);
        if(use==0) break;
        else a[i++] = use;
    }

    for(int j=i-1;j>=0;j--) printf("%d ",a[j]);
}