#include <cstdio>
#include <ctype.h>
/*ctype提供了用于字符分类和转换的函数
    1.判断字符属于哪种类别
    2.转换字符形式
*/

int main()
{
    //isalnum==> is alpha or number;但是是字符类型
    if(isalnum(1)) printf("yes");
    //这个是检查了ascii表中1对应的字符
    //isalpha 检查字符是否是A-Z,a-z
    if(isalpha('z')&&isalpha('A')) printf("yes\n");
    //isdigit检查字符是否是‘0’-‘9’
    //islower 'a'-'z'
    //isupper 'A'-'Z'
    //isspace 空格，tab，换行
    char ch = 'A';
    printf("%c\n",tolower(ch));
    //tolower 转换为小写
    //topper 转换为大写
    //这两个都是原本如果就符合要求就不做更改了
}