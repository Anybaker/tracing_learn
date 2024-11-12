#include <stdio.h>
#include <string.h>

int main()
{   
    printf("char to string[]\n");
    char s[] = "HI";
    char t[] = "HI";
    /*if(s == t)*/if(strcmp(s,t)==0)//the latter will be SAME;to differ,cause' one bye one' check
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }

    printf("char* to string[]\n");
    char* r = "HI";
    char* i = "HI";
    if(r == i)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }
    printf("address1:%p\n",r);
    printf("address2:%p\n",i);

    printf("char[]to make, scanf to string[]\n");
    char n[100],g[100];
    scanf("%s%s",&n,&g);
        if(n == g)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }
    printf("address1:%p\n",n);
    printf("address2:%p\n",g);

    printf("char* to make, scanf to string[]\n");
    char* q ,j;
    scanf("%s%s",&i,&j);
        if(q == j)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }
}