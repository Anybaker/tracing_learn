#include <iostream>
using namespace std;

int cnt[30000],n,res,tmp;
int main()
{
    cin >> n;
    int use[n];

    for(int i=0;i<n;i++)
    {       
        cin >> tmp;
        use[i] = tmp;
        if(cnt[use[i]]) res++;
        for(int j=i-1;i!=0&&j>=0&&use[i]!=use[j];j--) cnt[use[i]+use[j]]++;
    }

    cout << res;
}