#include <iostream>

const int N = 1e5+10;

int primes[N],cnt;
bool st[N];

void getPrime_low(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i]) primes[cnt++] = i;
        for(int j=i+i;j<=n;j+=i) st[j]=true;
    }
}

void getPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i]) 
        {
            primes[cnt++] = i;
            for(int j=i*i;j<=n;j+=i) st[j]=true;
        }
    }
}

void getPrime_linear(int n)
{
    for(int i=2;i<=n;i+=1)
    {
        if(!st[i]) primes[cnt++]=i;
        for(int j=0;j<=n/i;i++)
        {
            st[primes[j]*i]=true;
            if(i%primes[j]==0) break;//to choose "primes[h]",not focus on "i" only to delete "x*prime"
                                     //此时prime[j]一定是i的最小质因子
        }
    }
}