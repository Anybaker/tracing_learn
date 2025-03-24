#include <iostream>
#include <vector>
//t用来存每一位乘法运算后的数字 注意最高位如何处理
using namespace std;

void output(vector<int> &a)
{
    for(int i=a.size()-1;i>=0;i--)
        cout << a[i];
}

vector<int> mul(vector<int> A,int b)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size()||t;i++)
    {
        if(i<A.size()) t = A[i]*b;
        C.push_back(t%10);
        t/=10;
    }
    return C;
}
int main()
{
    string a;int b;
    vector<int> A;
    cin >> a >> b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');

    auto C = mul(A,b);
    output(C);
}