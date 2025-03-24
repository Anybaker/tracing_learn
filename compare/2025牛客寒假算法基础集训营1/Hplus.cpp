#include <iostream>
#include <vector>
#include <set>
#include <utility>
using namespace std;

vector<pair<int,int>> interval;
vector<int> ans;
set<int> use;

int main()
{
    int n;
    cin >> n;
    interval.resize(n),ans.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> interval[i].first >> interval[i].second;
    }

    for(int i=1;i<=n;i++) use.insert(i);

    for(int i=0;i<n;i++)
    {
        auto it = use.lower_bound(interval[i].first);
        //cout << i << "  " << *it << endl;
        if(it==use.end())
        {
            //cout << "this is " << i << "it is " << *it << endl;
            cout << "-1";
            return 0;
        }
        ans[i] = *it;
        use.erase(it);
    }

    for(auto num:ans) cout << num << " ";
    return 0;
}