#include <iostream>
using namespace std;

int main()
{
    float a;
    cin >> a;
    int b = a*10;
    float reverse=0;
    while(b)
    {
        reverse *= 10;
        reverse += b%10;
        b /= 10;
    }
    float ans = reverse/1000;
    cout << ans;
}