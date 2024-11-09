#include <stdio.h>

int main()
{
    int a[8]={1,3,5,7,10,23,11,4,5,8};
    int i;
    for(i=0;i<8;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    int j;
    for(j=7;j>=0;j--)
    {
        printf("%d",a[j]);
        printf(" ");
    }
}