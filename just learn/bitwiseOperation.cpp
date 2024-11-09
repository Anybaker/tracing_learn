#include <iostream>

using namespace std;

int lowbit(int x)//返回x的最后一位1
{
    return x&-x;
}
int main()
{
    //输出二进制
    int n = 10;
    for(int k=3;k>=0;k--) cout << (n>>k&1);
    cout << endl;
    //统计x中有多少个1
    int x = 5,res=0;
    while(x) x-=lowbit(x),res++;
    cout << res;
}