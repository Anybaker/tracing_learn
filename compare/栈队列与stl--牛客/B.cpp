//取最大和问题
//同一坐标下选择更大的那个
#include <iostream>
#include <vector>
#include <math.h>
#include <array>
#include <algorithm>
using namespace std;

//在早上选择相对更大的 
//如果早上更大的数量比k多 那么就选择损失更少的 也就是两次差值更大的那个（收益更大）

int main()
{
    int n,k; 
    cin >> n >> k;
    vector<int> mor(n);
    vector<int> aft(n); 
    vector<array<int,2>> sub(n);
    int sum = 0;
    for(int i=0;i<n;i++) cin >> mor[i];
    for(int i=0;i<n;i++)
    {
        cin >> aft[i];
        sub[i][0] = mor[i] - aft[i];//插值
        sub[i][1] = i;//第几个
    }
    sort(sub.begin(),sub.end(),[](const array<int,2>& x,const array<int,2>& y){return x[0] > y[0];});//按左区间降序排序
    for(int i=0;i<n;i++)
    {
        //cout << sub[i][0] << " ";
        if(i<k) sum += mor[sub[i][1]];
        else sum += aft[sub[i][1]];
    }
    cout << sum << endl;
    return 0;

}