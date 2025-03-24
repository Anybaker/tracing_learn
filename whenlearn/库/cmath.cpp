#include <cstdio>
#include <cmath>

int main()
{
    int x = -5;
    printf("%d\n",abs(x));
    printf("%f\n",pow(2,3)); //必须是浮点型
    printf("%f\n",fmod(5.3,1.2));//计算两个浮点数相除后的余数
    //sin cos tan asin acos atan 都返回浮点型
    //exp log(ln) log10 以e为底的幂；以e，10为底的对数
    //M_PI M_E
    printf("%f\n",ceil(2.3)); //向上取整，floor向下
    printf("%f\n",round(2.5)); //四舍五入
}