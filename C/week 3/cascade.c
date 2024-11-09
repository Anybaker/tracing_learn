#include <stdio.h>

void cascade(int num);

int main(){
    cascade(1234);
    return 0;

}

void cascade(int num){
    if (num < 10){
        printf("%d \n",num);
    }
    else{      
        printf("%d \n",num );
        cascade(num / 10);
        printf("%d \n",num);
    }
}