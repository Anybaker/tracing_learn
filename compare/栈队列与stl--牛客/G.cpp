#include <iostream>
#include <deque>
#include <stack>
#include <vector>
using namespace std;
vector<int> maxx;
int main()
{
    //已经压入栈的输出顺序是固定的
    //提前出栈会直接优先后面所有的元素出栈
    //出栈情况为当前栈顶元素是与后面元素相比的最大值 
    int n;
    cin >> n;
    int a[n];
    stack <int> st;
    for(int i=0;i<n;i++) cin >> a[i];
    maxx.resize(n+1);
    for(int i=n-1;i>=0;i--) maxx[i] = max(maxx[i+1],a[i]);
    //for(auto max:maxx) cout << "maxis:" << max << " ";
    for(int i=0;i<n;i++)
    {
        st.push(a[i]);
        while(!st.empty() && st.top()>=maxx[i+1])
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    return 0;
}