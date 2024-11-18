#include <iostream>

void forceDivide(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            int s=0;
            while(n%i==0)
            {
                n/=i;
                s++;
            }
            std::cout << i << s << "times";
        }
    }
}

void divide(int n)
{
    for(int i=2;i<=n/i;i++)//in n lies a divide bigger than sqrt(n)
    { 
        if(n%i==0){
            int s=0;
            while(n%i==0){
                n/=i;
                s++;
            }
            std::cout << i << s << "times";
        }
        
    }
    if(n > 1) std::cout << n << " " << 1;
}