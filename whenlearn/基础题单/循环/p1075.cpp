#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> get_divisor(int n)
{
    vector<int> res;
    for(int i=1;i<n/i;i++)
    {
        if(n%i==0)
        {
            res.push_back(i);
            //printf("%d  %d",i,n/i);
            if(i != n/i) res.push_back(n/i);
        }
    }
    sort(res.begin(),res.end());
    //printf("\n");
    return res;
}

int main()
{
    int n;
    scanf("%d",&n);
    auto ans = get_divisor(n);
    //for(auto x: ans) printf("%d ",x);
    printf("%d",*(ans.end()-2));
    }