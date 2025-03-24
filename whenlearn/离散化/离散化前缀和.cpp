#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> pii;
const int N = 3e5+10;

int n,m;
int a[N],s[N];

vector<int> alls;//用来存储所有涉及到的下标
vector<pii> add,query;//用来存储下标-数据以及询问区间

int find(int x,vector<int> & alls)
{
    int l=0,r=alls.size();
    while(l<r)
    {
        int mid = l+(r-l)/2;
        if(alls[mid]<x) l=mid+1;
        else r=mid;
    }
    //最终只能是l==r 所以l/r就是目标下标的位置
    return l+1;//+1是为了符合表达的习惯“第几个数字”不会说第零个
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int x,c;
        cin >> x >> c;

        add.push_back({x,c});
        alls.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin >> l >> r;
        
        query.push_back({l,r});
        alls.push_back(l);
        alls.push_back(r);
    }

    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());

    for(auto item: add)
    {
        int x = find(item.first,alls);
        a[x] = item.second;
    }
    //到这里就已经完成了离散化 所有再无限空间以键值对输入的数据都已经被离散化储存在连续的有限空间a[]数组中

    //下面就是前缀和了
    for(int i=1;i<=alls.size();i++) s[i] = s[i-1] + a[i];
    
    //处理询问
    for(auto item: query)
    {
        int l,r;
        l = find(item.first,alls);
        r = find(item.second,alls);
        cout << s[r] - s[l-1] << endl;
    }

    return 0;
}