#include <iostream>
using namespace std;
#define price 19
int main()
{
    int a,b;
    cin >> a >> b;
    int change = a*10 + b;
    cout << change/price;
}