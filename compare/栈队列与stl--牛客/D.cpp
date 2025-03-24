#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int n;
bool cmp(string &a,string &b)
{
    return a+b>=b+a;
}
int main()
{
    cin >> n;
    string a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,cmp);
    for(auto s:a) cout << s;
}