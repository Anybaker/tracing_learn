#include <stdio.h>;

int main(){
    
    /*for(int i=0;i<4;i++){
        printf("?");
    }
    printf("\n");  //光标位置 */
    int n;
    do{
        printf("plz type in your expected size:\n");
        scanf("%d",&n);
    }while(n<1);
   for(int i=0;i<n;i++){
    for(int i=0;i<n;i++){ //either i or j is ok;it's a parameter
        printf("#");
    }
    printf("\n");
   }
}
