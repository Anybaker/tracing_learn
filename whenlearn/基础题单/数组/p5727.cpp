#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> use;
int main()
{
    cin >> n;
    use.push_back(n);
    while(n!=1)
    {   
        if(n%2==0) use.push_back(n/2);
        else use.push_back(3*n+1);
        n = use.back();
    }
    for(int len=use.size(),i=len-1;i>=0;i--) cout << use[i] << " ";
}