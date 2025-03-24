#include <cstdio>
#include <vector>
#include <algorithm>

long long add,sub;
std::vector <long long> a;

long long n;

int main()
{
    scanf("%lld",&n);
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    std::sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        long long target = i+1;
        if(a[i]>target) sub += a[i] - target;
        else add += target - a[i];
        //printf("target:%lld a[i]:%lld sub:%lld add:%lld\n",target,a[i],sub,add);
    }

    if(add!=sub) add = -1;
    printf("%lld",add);

    return 0;
}