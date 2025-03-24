#include <cstdio>

//计算数组中某一位其左边小于他的数目

int N;
int main()
{
    scanf("%d",&N);
    int a[N],cnt[N]={0};

    for(int i=0;i<N;i++) scanf("%d",&a[i]);

    int use;
    for(int i=1;i<N;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]>a[j]) cnt[i]++;
        }
    }
    
    for(int i=0;i<N;i++) printf("%d ",cnt[i]);
}