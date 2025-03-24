#include <iostream>
#include <vector>
#include <algorithm>
//除法从高位开始 存储也是逆序所以最后需要反转
//r存储的是实际被除数 包含上一位剩下的和当前位
using namespace std;

void output(vector<int> &a)
{
    for(int i=a.size()-1;i>=0;i--)
        cout << a[i];
}

vector<int> div(vector<int> A,int b)
{
    vector<int> C;
    int r = 0;

    for(int i=A.size()-1;i>=0;i--)
    {
        r = r*10 + A[i];
        C.push_back(r/b);
        r%=b;
    }

    reverse(C.begin(),C.end());
    while(C.size()>1 && C.back()==0) C.pop_back();
    
    return C;
}
int main()
{
    string a;int b;
    vector<int> A;
    cin >> a >> b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');

    auto C = div(A,b);
    output(C);
}