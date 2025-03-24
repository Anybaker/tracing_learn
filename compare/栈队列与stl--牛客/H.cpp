#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    string a;
    while(cin >> a)
    {
    stack<char> st;
    for(int i=0;i<a.size();i++)
    {
        if(i==0)
        {
            st.push(a[i]);
            continue;
        }
        if(!st.empty() && st.top() == a[i])
        {
            if(a[i] == 'O') st.pop();
            else{
                st.pop();
                //st.push('O');先不急着push 因为会产生一个O
                if(!st.empty() && st.top()=='O') st.pop();
                else st.push('O');
            }
        }
        else st.push(a[i]);
    }
    int k=0;
    char ans[st.size()];
    while(!st.empty())
    {
        ans[k++] = st.top();
        st.pop();
    }
    for(int i=k-1;i>=0;i--) cout << ans[i];
    cout << endl;
    }
}