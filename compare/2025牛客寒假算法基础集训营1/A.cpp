#include <cstdio>
#include <algorithm>
#include <vector>

#define ll long long
using namespace std;

bool isPrime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;

    for(int i=3;i<=n/i;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}

ll oneprime(vector<ll>&A)
{
    sort(A.begin(),A.end());
    if(A[0]==1) return -1;
    ll use = A[A.size()-1];
    use += 1;
    while(!isPrime(use))
    {
        use++;
    }
    return use;
}

int T,n;
vector<ll> A;
vector<ll> ans;
int main()
{
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        ll tmp;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&tmp);
            A.push_back(tmp);
        }
        ans.push_back(oneprime(A));
        A.clear();
    }
    for(int i=0;i<T;i++)
    {
        printf("%lld\n",ans[i]);
    }
}