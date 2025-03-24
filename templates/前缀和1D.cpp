#include <iostream>

int sum1[11];
int sum2[11];
const int n = 10;
int main(){
    int a[n]={1,2,3,4,5,6,7,8,9,10};
    
    sum1[0]=a[0];
    for(int i=1;i<=n;i++){
        sum1[i] = sum1[i-1] + a[i];
    }
    for(int i=0;i<n;i++)
        printf("%d ",sum1[i]);
    puts("");
    /*
        第一种写法
            待处理数据数组有意义数据从0开始
            sum数组第0个和第一个直接相等
            sum[i]为前i+1个数据的和
            sum[x]-sum[x-1]为第x个数据 原数组中下标为x-1
            我解释不清了
            这种写法十分紊乱！ 我们不采取
    */
   for(int i=1;i<=n;i++){
        sum2[i] = sum2[i-1] + a[i-1]; 
   }
   for(int i=1;i<=n;i++)
    printf("%d ",sum2[i]);

}