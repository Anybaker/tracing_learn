#include <stdio.h>

int main(void)
{
    //YES char s[]="HI!";
    char* s="HI!";
    //NOT char s = "HI!";
    int a = 0,b=1;
    double j = 0.1;
    printf("address of the string straightly: %p\n",s);
    printf("using pointers to reprsent a int a:%p\n",a);//this just print its binary form
    printf("using pointers to reprsent a int b:%p\n",b);//this just print its binary form
    printf("using pointers to reprsent a double:%p\n",j);//this just print its binary form
    //printf("%p\n",&s);
    printf("address of the first element straightly:%p\n",s[0]);//this just respond to ASCII
    printf("address of the 1st element of the string:%p\n",&s[0]);
    //printf("%c\n",s[0]);
    //printf("%s\n",s);
    printf("address of the 2nd element of the string:%p\n",&s[1]);
    printf("address of the 3rd element of the string:%p\n",&s[2]);
    printf("\n");
    printf("using asterisk to dereference a string ,then print:\n");
    printf("\n");
    printf("%c",*s);
    printf("%c",*(s+1));
    printf("%c",*(s+2));
}