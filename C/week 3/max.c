#include <stdio.h>

int process(int arr[],int begin,int last);
int get_max(int a,int b);

int main()
{
    int arr[5]={2,8,9,10,29};
    int max=process(arr,0,4);
    printf("max:%d",max);
}

int process(int arr[],int begin,int last)
{
    if(arr[begin]==arr[last])
    {
        return arr[begin];
    }
    int mid=begin+(last-begin)/2;
    int a=process(arr,begin,mid);
    int b=process(arr,mid+1,last);
    return get_max(a,b);

}


int get_max(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else{
        return b;
    }
}