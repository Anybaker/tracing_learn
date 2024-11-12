//归并排序
//分割为子问题 比较大小并交换
//比较并排序（两部分）
//双指针进行合并过程
#include <stdio.h>
void process(int arr[],int begin,int last);
void merge(int arr[],int begin,int mid,int last);

int main()
{
    int arr[4]={2,4,7,8};
    process(arr,0,4);
    for(int i=0;i<4;i++){
        printf("%d\n",arr[i]);
    }
}

void process(int arr[],int begin,int last)
{
    if(arr[begin]==arr[last]){
        return;
    }
    else
    {
        int M=begin+(last-begin)/2;
        process(arr,begin,M);
        process(arr,M+1,last);
        merge(arr,begin,M,last);
    }
}
void merge(int arr[],int begin,int mid,int last)
{
    int help[100];
    int j=0,p1=begin,p2=mid+1;
    int L=mid,R=last-mid-1;
    while(j<=L && j<=R){
        help[j++]=arr[p1]>=arr[p2]?arr[p1++]:arr[p2++];
    }
    while(j<=L){
        help[j++]=arr[p1++];
    }
    while(j<=R){
        help[j++]=arr[p2++];
    }
    for(int i=0;i<last+1;i++){
        arr[begin+i]=help[i];
    }
}