#include <iostream>
#include <vector>
using namespace std;
//t作为减法的最终结果 在第一次涉及t的运算时是求真正的被减数字
//如果t小于零说明被借位了
bool cmp(vector<int> &a,vector<int> &b)
{
    if(a.size()!=b.size()) return a.size()>b.size();
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]!=b[i]) {return a[i]>b[i];}
    }
        
    return true;
}

void output(vector<int> &a)
{
    for(int i=a.size()-1;i>=0;i--)
        cout << a[i];
}

vector<int> sub(vector<int> &A,vector<int> &B)
{ 
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t = A[i] - t;
        if(i<B.size()) t-=B[i]; 
        C.push_back((t+10)%10);
        if(t<0) t=1;
        else t=0;
    }
    while(C.size()>1 && C.back()==0) C.pop_back();//去除前导0
    return C;
} 
int main()
{
    string a,b;
    vector<int> A,B;
    cin >> a >> b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) B.push_back(b[i]-'0');

    if(cmp(A,B)){
        auto C = sub(A,B);
        output(C);
    }
    else{
        auto C = sub(B,A);
        cout << '-';output(C);
    }
}