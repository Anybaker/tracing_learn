#include <stdio.h>;
#include <math.h>;
int main(){
    int size=0;

        printf("plz enter one odd number:");
        scanf("%d",&size);
    int mid=(size+1)/2;
    
    for (int i=1;i<=size;i++)//控制行数 第i行
    {
        for(int j=1;j<=size;j++)//控制列数 第i行第j列
        {
           int dis=abs(i-(size+1)/2);
            if (j==mid+dis || j==mid-dis){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}