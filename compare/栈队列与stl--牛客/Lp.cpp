#include <iostream>
#include <set>
using namespace std;

int m,k;
struct cmp
{
    bool operator()(const int &a,const int &b) const
    {
        if(abs(a-b) <= k) return false;
        return a < b;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin >> m >> k;
    set<int,cmp> prin;
    while(m--)
    {
        string op;int x;
        cin >> op >> x;
        if(op == "add") prin.insert(x);
        else if(op == "del") prin.erase(x); 
        else if(prin.find(x) != prin.end()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    cout << prin.size();
}