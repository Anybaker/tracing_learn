#include <cstdio>

bool isprime(int a)
{
    if(a<=1) return false;
    if(a==2) return true;
    if(a%2==0) return false;
    for(int i=3;i<=a/i;i+=2)
        if(a%i==0) return false;
    return true;
}