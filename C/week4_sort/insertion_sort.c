#include <stdio.h>
//从小到大

int main()
{
    int arr[7]={1,7,8,4,15,3,9};
    for(int i=0;i<6;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            int tmp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tmp;
        }
    }
    for(int i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }
}