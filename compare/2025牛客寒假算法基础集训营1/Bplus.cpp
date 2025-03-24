#include <cstdio>
#include <iostream>
using namespace std;

int st,ed,pd,n,a[100010];

int main()
{
    int x,y;
    scanf("%d",n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d %d",&x,&y);
        a[x]++;
        a[y]++;
    }

    for(int i=1;i<=10010;i++)
    {
        if(a[i]==1)
        {
            if(!st) st=i;
            else if(!ed) ed=i;
            else pd = 1;
        }        
    }

    if(pd) cout << -1;
    else cout << st << " " << ed;

}