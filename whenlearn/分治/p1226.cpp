#include <cstdio>
int main()
{
    long a,b,p;
    long res = 1;
    scanf("%d%d%d",&a,&b,&p);
    long aa=a,bb=b,pp=p;
    a%=p;
    while(b)
    {
        if(b&1) res=res*a%p;
        a=a*a%p;
        b>>=1;
    }
    printf("%ld^%ld mod %ld=%ld",aa,bb,pp,res);
    return 0;
}