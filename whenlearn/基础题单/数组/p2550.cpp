#include <cstdio>
#include <algorithm>
#include <iostream>
int hash[40],n,tmp;
int main()
{
    scanf("%d",&n);
    int a[n][7],cnt[n]={0};

    //zhongjianghaoma
    for(int i=0;i<7;i++)
    {
        scanf("%d",&tmp);
        hash[tmp] = 1;
    }

    //duqucaipiao
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<7;j++)
        {
            scanf("%d",&tmp);
            if(hash[tmp]) cnt[i]++;
        }
    }
    //for(int i=0;i<n;i++) std::cout << cnt[i] << "  ";
    std::sort(cnt,cnt+n);
    //for(int i=0;i<n;i++) std::cout << cnt[i] << "  ";
    int res[7]={0};

    for(int i=0;i<n;i++)
    {
        if(cnt[i]==0) continue;
        else res[7-cnt[i]]++;
    }

    for(int i=0;i<7;i++) std::cout << res[i] << " ";

}