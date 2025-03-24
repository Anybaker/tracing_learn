#include <cstdio>
#include <vector>
#include <algorithm>

#define int long long
int N,C;
std::vector<int> sta;
std::vector <int> res;
int slow,fast,ans;
int hash[1000000];
signed main()
{
    int use;
    scanf("%d %d",&N,&C);
    int n = N;
    while(n--)
    {
        scanf("%d",&use);
        sta.push_back(use);
        hash[use]++;
    }
    sort(sta.begin(),sta.end());

    fast = 1;
    while(slow<=fast&&fast<N)
    {
        if(sta[fast]-sta[slow]==C) res.push_back(sta[fast]),slow++;
        else if(sta[fast]-sta[slow]<C) fast++;
        else slow++;
    }

    res.erase(unique(res.begin(),res.end()),res.end());
    for(auto ele : res)
    {
        ans += hash[ele]*hash[ele-C];
    }
    printf("%d",ans);
    
}