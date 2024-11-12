#include <iostream>
using namespace std;
#include <math.h>
#define pi 3.14
int main()
{
    int h,r;
    cin >> h >> r;
    int demand = 20e3;
    float v = h*pi*r*r;
    cout <<ceil(demand/v);

}