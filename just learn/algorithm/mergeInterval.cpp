#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> PII;

void merge(vector<PII> &segs)
{
    sort(segs.begin(),segs.end());
    vector<PII> res;
    int st=-2E9,ed=-2E9;

    for(auto seg : segs)
    {
        if(ed < seg.first)
        {
            if(st != -2e9) res.push_back({st,ed});//保证只有更新st和ed后才会加入；只有新的区间会触发
            st = seg.first;ed = seg.second;
        }
        else ed = max(ed,seg.second);
    }
    if(st!=-2e9 && ed!=2e9) res.push_back({st,ed});

    segs = res;
}
vector<PII> segs;
int n;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin >> l >> r;
        segs.push_back({l,r});   
    }

    merge(segs);

    cout << segs.size() ;
}