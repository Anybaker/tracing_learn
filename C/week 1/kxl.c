#include <stdio.h>

int main(){
    int n = 8;
    printf("plz enter one odd number:");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++){
        int space_num = abs((n+1)/2-i);
        for (int j=1;j<=n;j++){   
            if (j ==(space_num +1)||j==(n-space_num)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
        
     }
}

