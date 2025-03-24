#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    while(n--)
    {
        queue<string> outExpected;
        map<string,int> status;
        int use,res=0,people=0;
        cin >> use;
        while(use--)
        {
            string a,b;
            cin >> a >> b;
            if(a=="in")
            {
                status[b] = 1;
                outExpected.push(b);
            }
            else
            {
                status[b] = 0;
                if(b == outExpected.front()) res++;
            }
            while(!outExpected.empty() && status[outExpected.front()]==0) outExpected.pop();
        }
        ans.push_back(res);
    }
        for(auto item:ans) cout << item << endl;
        return 0;
    
}