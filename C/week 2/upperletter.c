#include <stdio.h>
#include <string.h>


int main(void){
    char s[100];//char s[100] = "\0";
    printf("plz enter letters");
    scanf("%s",&s);
    for(int i=0,len = strlen(s);i<len;i++){
        if (s[i]>='a'&&s[i]<='z'){
            //printf("%c",s[i]-32);
             printf("%c",s[i]-('a'-'A'));
        }
        else{
            printf("%c",s[i]);
        }
    }


}
//using (#include <ctype.h>)'s toupper(s[i]) instead of if.....else...