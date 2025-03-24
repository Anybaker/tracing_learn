#include <iostream>
using namespace std;

const int N = 2e6+10;
int n,m,l[N],r[N],ans,cnt;

int main(){
    cin >> n >> m;
    for(int i=1,use;i<=n;i++){
        cin >> use;
        if(use<0) l[-use]++;
        else if(use>0) r[use]++;
        else cnt++;
    }

    for(int i=1;i<=m;i++) 
        l[i]+=l[i-1],r[i]+=r[i-1];

    for(int i=1,con;i<=m;i++){
        con = l[i];
        if(m-i*2>0) con+=r[m-2*i];
        ans = max(ans,con);

        con = r[i];
        if(m-2*i>0) con+=l[m-2*i];
        ans=max(ans,con);
    }

    cout << ans+cnt;
    return 0;
}