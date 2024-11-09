#include <stdio.h>;

const N = 3;
num[]={0,0,0,0};
cents[]={25,10,5,1};

int main(){
    int cash,nu;
    do{
        printf("change:");
        scanf("%d",&cash);
    }while(cash<0);
    for(int i=0;i<N;i++){
        int n = cash / cents[i];
        cash = cash - n*cents[i];
        num[i]=n;
    }
    for (int i=0;i<N;i++){
        nu = nu + num[i];
    }
    printf("how many:%d",nu);
}