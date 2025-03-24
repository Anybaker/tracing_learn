#include <cstdio>

int a[8] = {1,2,3,4,5,6,7,8};
int judge[8];
void pailie(int t)
{
    if(t==8)
    {
        for(int i=0;i<8;i++) printf("%d ",a[i]);
        printf("\n");
        return;
    }

    for(int i=0;i<8;i++)
    {
        if(judge[i]==0)
        {
            a[t] = i+1;
            judge[i] = 1;
            pailie(t+1);
            judge[i] = 0;
        }
    }
}

int main()
{
    pailie(0);
}