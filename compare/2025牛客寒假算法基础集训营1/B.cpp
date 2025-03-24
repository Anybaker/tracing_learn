#include <iostream>
#include <map>
#include <vector>
using namespace std;

int n;
int use1,use2;

int use[100000010];
vector<int> store;
int ans[2];
bool judge = false;

int main()
{
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        cin >> use1 >> use2;
        use[use1] = use2;
        store.push_back(use1);
    }
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        int index = store[i];
        while(use[index]!=0 && index!=use[index])
        {
            ans[1] = use[index];
            index = use[index];
            cnt++;
        }
        if(cnt==n-1)
        {
            judge = true;
            ans[0] = store[i];
            break;
        }

        cnt = 0;
        
    }
    
    if(judge) cout << ans[0] << " " << ans[1];
    else cout << -1;
    
}