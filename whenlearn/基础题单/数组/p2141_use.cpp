#include <iostream>

using namespace std;

int n,cnt[20005],cntg[20005],res;
int main()
{
    cin >> n;
    int use[n];
    for(int i=0;i<n;i++) cin >> use[i],cnt[use[i]]=1;
    for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) cntg[use[i]+use[j]]=1;
    for(int i=0;i<n;i++) if(cnt[use[i]]&&cntg[use[i]]) res++;
    cout << res;
}