#include <cstdio>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int use = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(use<10) printf("0%d",use++);
            else printf("%d",use++);
        }
        printf("\n");
    }

    use=1;
    printf("\n");

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j>n-i)
            {
                if(use<10) printf("0%d",use++);
                else printf("%d",use++);
            }
            else printf("  ");
        }
        printf("\n");
    }
    //system("PAUSE");
}