#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int,int> PII;

//可以使用标注1和0的形式进行计算 但这里为了顺便复习使用区间合并 
void mergeInterval(vector<PII> &segs)
{
    sort(segs.begin(),segs.end());
    vector<PII> res;
    int ft=-2e9,ed=-2e9;
    for(auto seg: segs)
    {
        if(ed<seg.first)
        {
            if(ed != -2e9) res.push_back({ft,ed});
            ft = seg.first,ed = seg.second;
        }
        else ed = max(ed,seg.second);
    }
    if(ft!=-2e9&&ed!=-2e9) res.push_back({ft,ed});

    segs = res;
}
vector<PII> segs;
int main()
{
    int l,m;
    cin >> l >> m;
    int a,b;
    while(m--)
    {
        cin >> a >> b;
        segs.push_back({a,b});
    }
    mergeInterval(segs);
    int use=0;
    for(auto seg:segs)
    {
        //cout << seg.first << seg.second << "\n";
        use += seg.second-seg.first;
    }

    cout << l+1-use-segs.size();
    
    return 0;
}