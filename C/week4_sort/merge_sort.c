//归并排序
//分割为子问题 比较大小并交换
//比较并排序（两部分）
//双指针进行合并过程

#include <stdio.h>

void mergeSort(int arr[],int L,int R);
void merge(int arr[],int L,int M,int R);

int main(){
    int arr[5]={1,7,9,10,11};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}
void mergeSort(int arr[],int L,int R){
    if(L>=R){
        return;
    }
    else
    {
        int M=L+(R-L)/2;
        mergeSort(arr,L,M);
        mergeSort(arr,M+1,R);
        merge(arr,L,M,R);
    }
}
void merge(int arr[],int L,int M,int R)
{
    int j=0,p1=L,p2=M+1;
    //int L_B=M-L+1,R_B=R-M;
    int help[100];
    while(p1<=M && p2<=R){//遍历的长度
        help[j++]=arr[p1]>=arr[p2]?arr[p1++]:arr[p2++];
    }
    while(p1<=M){
        help[j++]=arr[p1++];
    }
    while(p2<=R){
        help[j++]=arr[p2++];
    }
    int len=R-L+1;
    for(int i=0;i<len;i++)
    {
        arr[L+i]=help[i];
    }
}