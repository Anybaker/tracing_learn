#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> PII;
const int N = 3e5+10;

int n,m;
int a[N],s[N];// a用来存离散化数组 s用来前缀和

vector<int> alls;
vector<PII> add,query;

int find(int x)
{
    int l=0,r=alls.size()-1;
    while(l<r)
    {
        int mid = l+r>>1;
        if(alls[mid]>=x) r=mid;
        else l=mid+1;
    }

    return r+1;// 方便离散化
}
int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int x,c;
        cin >> x >> c;
        add.push_back({x,c});// x是下标 c是插入值 add存储这样一个键值对

        alls.push_back(x);//将下标加入alls
    }

    for(int i=0;i<m;i++)
    {
        int l,r;
        cin >> l >> r;
        query.push_back({l,r});

        alls.push_back(l);//将查询区间左端点加入alls
        alls.push_back(r);//将查询区间右端点加入alls
    }

    // 去重
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());

    for(auto item: add)
    {
        int x = find(item.first);//找到了下标在alls中的下标
        a[x] += item.second;//使用这个下标等价偏移作用在a的下标用来存储 实现映射
    }

    //预处理离散化
    for(int i=1;i<=alls.size();i++) s[i] = s[i-1] + a[i];

    //处理询问
    for(auto item: query) 
    {
        int l = find(item.first),r = find(item.second);

        cout << s[r] - s[l-1] << endl;
    }   
    return 0;
	//this is what i write on linux

}
