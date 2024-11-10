#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 1e6+10;
/*
大整数的存储 高位在后面 方便加位数
123456
543210 ---数组下标
*/

//判断是否有A>B
bool cmp(vector<int> &A,vector<int> &B)
{
    if(A.size() != B.size()) return A.size() > B.size();
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i] != B[i]) return A[i] > B[i];
    }
    return true;
}

//输出大整数
void print_output(vector<int> &C)
{

    for(int i=C.size()-1;i>=0;i--) std::cout << C[i];
}

//C = A+B
vector<int> add(vector<int> &A,vector<int> &B)
{
    vector<int> C;

    int t=0;//这个用来表示每一位的相加值
            //t表示的是两个数中每一位对应的和再加上上一位遗留下来的进位
    for (int i=0;i<A.size() || i<A.size();i++)
    {
        //cout << A[i] << ' ' << B[i] << endl;
        if(i < A.size()) t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t%10);
        t/=10;
    }
    if(t) C.push_back(1);

    return C;


}

//C = A-B
vector<int> sub(vector<int> &A,vector<int> &B)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t = A[i] - t;
        if(i < B.size()) t -= B[i];
        C.push_back((t+10)%10); //t大于等于0则返回t 小于零则返回t+10
        
        if(t<0) t=1;
        else t=0;   //这个表示不够减 说明上一位 被借位了
    }

    //去除前导零
    while(C.size() > 1 && C.back()==0) C.pop_back();
    return C;
}

//C = A*B
vector<int> mul(vector<int> &A,int b)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size() || t;i++) //处理最高位加的情况
    {
        if(i < A.size()) t += A[i]*b;
        //printf("%d",t);
        C.push_back(t%10);
        t /= 10;
    }
    
    return C;
}

//C = A/d r=A%d
vector<int> div(vector<int>A,int b,int &r)
{
    vector<int> C;
    r=0;

    for(int i=A.size()-1;i>=0;i--)
    {
        r = r*10 + A[i];
        C.push_back(r/b);//注意 除法得出的最高位在0了
        r %= b;
    }

    reverse(C.begin(),C.end());
    while(C.size()>1 && C.back()==0) C.pop_back();

    return C;
}


int main()
{
    string a,b;int c,r;
    vector<int> A,B;

    cin >> a >> b >> c;
    for(int i = a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    for(int i = b.size()-1;i>=0;i--) B.push_back(b[i]-'0');

    auto C = add(A,B);cout << "两数相加";print_output(C);
    
    cout << "两数相减"; 
    if(cmp(A,B))
    {
        auto S = sub(A,B);
        print_output(S);
    }
    else
    {
        auto S = sub(B,A);
        cout << '-';print_output(S);
    }

    cout << endl << "两数相乘" ;
    cout << "A*=";
    auto M1 = mul(A,c);print_output(M1);
    cout << endl << "B*=";
    auto M2 = mul(B,c);print_output(M2);

    cout << endl << "除法来啦";
    auto D1 = div(A,c,r);print_output(D1);cout << "余数是" << r << endl;
    r=0;
    auto D2 = div(B,c,r);print_output(D2);cout << "余数是" << r << endl;

    

    return 0;
}