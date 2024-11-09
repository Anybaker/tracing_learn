#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char*  s = "hi!";
    char*  t = malloc(strlen(s)+1);//make sure "\0"
    for (int i=0,n=strlen(s);i<n+1;i++)//"\0" is also one element
    {
        t[i]=s[i];
    }

    if(t == NULL)
    {
        return 1;
    }
    
    t[0]=toupper(t[0]);

    printf("%s\n",s);
    printf("%s\n",t);

    free(t);
    return 0;
}