#include <cstdio>

int main()
{
    int down=1;
    int use=0;
    for(int i=0;i<20;i++)
    {
        use += down;
        down *= 2;
    }
    int up = down-1;
    int d = down/2;
    printf("%d/%d",up,d);

}