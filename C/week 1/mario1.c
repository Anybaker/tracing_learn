#include <stdio.h>;

//两层循环 控制行与列 
//先判断输入是否正确
//从第n行开始 共打印size-n个空格 n个# 使用while嵌套if else
//第n行 第size-n到size个打印# 第1到size-n打印空格

int main(){
    int size,n;
    do {
        printf("size:");
        scanf("%d",&size);
    } while(size<1);
   // printf("%d",size);
   n = 0;
   for (int i=0;i<size;i++){ // n行 ru:size=5 01234
       for (int j=0;j<size;j++){ //第j列
        int t = j;
        if (size-j<=i+1){
            printf("#");
        }
        else{
            printf(" ");
        }
       }
       printf("\n");

   }
}
//打印空格的条件不好判断 那就判断打印#号的情况即可