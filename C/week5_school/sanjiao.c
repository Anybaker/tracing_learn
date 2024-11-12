#include <stdio.h>

int main()
{
    int n=4;
    printf("plz type in the size:");
    scanf("%d",&n);
    int mid=(2*n-1)/2+1;
    int max=2*n-1;

    for(int i=0;i<n;i++)//n行
    {
        for(int j=0;j<max;j++)//2*n-1列
        {
            if(i==0)
            {printf("*");continue;}
            else
            {
                if(j==i || j==max-i-1){printf("*");}
                else{printf(" ");}
            }
        }
        printf("\n");
    }
}