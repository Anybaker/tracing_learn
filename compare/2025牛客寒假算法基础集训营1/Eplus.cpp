#include <cstdio>
#include <vector>
#include <algorithm>
#define int long long //后续调整Ⅱ
using namespace std;

vector<int> a;
int getans(int x,int y)
{
    int n = a.size();
    int sum = 0;
    for(int i=0;i<n/2;i++)
    {
        sum += abs(x-a[i]);
    }
    for(int i=n/2;i<n;i++)
    {
        sum += abs(y-a[i]);
    }
    return sum;
}

void process()
{
    a.clear();
    int n;
    scanf("%lld",&n);
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }//完成了输入
    sort(a.begin(),a.end());

    int mid = n/2;
    if(a[mid/2] != a[mid+mid/2])
    {
        printf("%lld\n",getans(a[mid/2],a[mid+mid/2]));
    }
    else
    {
        int ans = min(getans(a[mid/2]+1,a[mid+mid/2]),getans(a[mid/2],a[mid+mid/2]-1));
        printf("%lld\n",ans);//后续调整Ⅲ %lld
    }

}
signed main()//后续调整Ⅳ signed
{
    int times;
    scanf("%lld",&times);
    while(times--)
    {
        process();
    }

    return 0; //后续调整Ⅰ
}