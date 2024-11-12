#include <stdio.h>
void hash(int n);


int main(void)
{
   hash(4);
}



void hash(int n)
{
    if(n==0)
    {
        return;
    }
    hash(n-1);            //somehow using "a promise" like cascade;
    for(int i=0;i<n;i++){
        printf("#");
    }
    printf("\n");
}