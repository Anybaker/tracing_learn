#include <iostream>
#include <set>
using namespace std;

int n;
set<string> use;
int main()
{
    cin >> n;
    while(n--)
    {
        string a;
        cin >> a;
        if(a=="younik")
        {
            cout << use.size()+1;
            break;
        }
        else
            use.insert(a);
    }
}