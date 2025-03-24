#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#define ll long long

int T,n;
vector<ll> A;
vector<string> ans;

bool judge(vector<ll> &A)
{
    if(A.size()&1) return false;
    sort(A.begin(),A.end());
    ll mid = A.size()/2;
    if(A[mid]==A[mid-1]) return false;

    A.erase(unique(A.begin(),A.end()),A.end());
    if(A.size()!=2) return false;
    return true;
}

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
        if(judge(A)) ans.push_back("Yes");
        else ans.push_back("No");
        A.clear();
    }

    for(int i=0;i<T;i++)
    {
        cout << ans[i] << endl;
    }
}