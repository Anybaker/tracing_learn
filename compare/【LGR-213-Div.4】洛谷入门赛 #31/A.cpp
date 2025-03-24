#include <iostream>
using namespace std;

int main()
{
    string a;
    int b;
    cin >> a >> b;
    int base = a[a.size()-1]-'0';
    int res = b - base;
    cout << (res+10)%10;
}