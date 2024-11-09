#include <stdio.h>

int main(void)
{
    int arr[7]={2,4,6,7,1,0,9};
    int a;
    for(int j=0;j<6;j++)
    {
        for(int i=0;i<6;i++)//6 instead of 7 cause' i+1
    {
        if(arr[i]>arr[i+1])
        {
            a = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=a;
        }
    }
    }

    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }


}