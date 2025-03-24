#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//123456被存储为[6,5,4,3,2,1] 下标小 位数就小 所以输出也要反向输出
//用t存储的某一位的实际加和
//最后需要看一下t的剩余
void output(vector<int>& a)
{
    for(int i=a.size()-1;i>=0;i--) cout << a[i];
}

vector<int> add(vector<int> &A,vector<int> &B)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size()||i<B.size();i++)
    {
        if(i<A.size()) t+=A[i];
        if(i<B.size()) t==B[i];
        C.push_back(t%10);
        t/=10;
    }
    if(t) C.push_back(1);

    return C;
}
int main()
{
    string a,b;
    vector<int> A,B;

    cin >> a >> b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');
}