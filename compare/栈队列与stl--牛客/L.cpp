#include <iostream>
#include <set>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int m,k;
    cin >> m >> k;
    set<int> prin;
    while(m--)
    {
        string op;int x;
        cin >> op >> x;

        if(op == "add") 
        {
            int low_bound;
            int record = 0;

            if((x-k)<0) low_bound = 0;
            else low_bound = x-k;

            for(int i=low_bound;i<=x+k;i++)
            {
                if(prin.count(i) == 1)  
                {
                    record = 1;
                    break;
                }
            }

            if(!record) prin.insert(x);
        }
        else if(op == "del")
        {
            int low_bound;
            if((x-k)<0) low_bound = 0;
            else low_bound = x-k;
            for(int i=low_bound;i<=x+k;i++)
                if(prin.count(i) == 1)
                    prin.erase(i);
        }
        else
        {
            int isfound = 0;
            int low_bound;
            if((x-k)<0) low_bound = 0;
            else low_bound = x-k;
            for(int i=low_bound;i<=x+k;i++)
            {
                if(prin.count(i) == 1) 
                {
                    cout << "Yes" << endl;
                    isfound++;
                    break;
                }
            }
            if(!isfound) cout << "No" << endl;
            
        }
    }
}