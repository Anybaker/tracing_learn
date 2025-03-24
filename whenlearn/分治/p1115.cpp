#include <cstdio>
#include <algorithm>
int n;

int main()
{
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int sum=0,maxx=-2147483647;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        sum = std::max(sum,arr[i]);
        maxx = std::max(sum,maxx);
    }
    printf("%d",maxx);
}