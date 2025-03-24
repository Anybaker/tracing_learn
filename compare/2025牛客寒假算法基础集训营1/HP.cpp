#include <iostream>
#include <deque>
#include <set>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<array<int,3>> a(n); //利用deque维护一个区间和i（第几个区间）
    int pt = 1;
    for(auto &[l,r,i] : a)
    {
        cin >> l >> r;
        i = pt++;
    }
    sort(a.begin(),a.end(),[](const array<int,3>& x,const array<int,3>& y) {return x[0] < y[0];}); //按照左区间升序排序，同时位置信息是被保留的
    vector<int> ans(n+1); // 存储答案
    set<array<int,3>> st; // 使用set在于它的自然排序，方便维护

    for(int i = 1;i<=n;i++)//对于1-n的数列，依次选择符合条件的区间赋值
    {
        while(a.size() && a[0][0] <= i)//a不为空且左区间小于目标i
        {
            auto [l,r,j] = a[0];
            st.insert({r,l,j});//r放在第一个 依次排序
            a.pop_front();//取出来了
        }//挑选出全部可以取得i值的区间
        if(!st.size())
        {
            cout << -1 << endl;
            return 0;
        }//没有的话就无解
        auto [r,l,j] = *st.begin();//取出符合条件且跨度最小的区间
        if(r<i)
        {
            cout << -1 << endl;
            return 0;
        } //右区间也要符合
        ans[j] = i;
        st.erase(st.begin());
    }//整体就是使得左区间最小且跨度最小的区间进行匹配
    for(int i=1;i<=n;i++) cout << ans[i] << " ";
}