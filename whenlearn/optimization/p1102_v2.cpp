#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#define int long long

int N,C;
std::vector<int> sta;
int ans;
//int hash[1000000];
std::map<int,int> hash;
signed main()
{
    int use;
    scanf("%ld %ld",&N,&C);
    int n = N;
    while(n--)
    {
        scanf("%d",&use);
        sta.push_back(use);
        hash[use]++;
    }
    //sort(sta.begin(),sta.end());
    //sta.erase(unique(sta.begin(),sta.end()),sta.end());
    for(auto ele: sta)
    {
        //printf("%d\n",ele);
        ans+=hash[ele+C];
    }
    //sort(sta.begin(),sta.end());

    /*fast = 1;
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
    }*/
    printf("%d",ans);
    
}