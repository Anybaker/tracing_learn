#include <stdio.h>
//从小到大

int main()
{
    int arr[7]={18,8,15,13,4,5,87};
    //printf("arr[0]=%d\n",arr[0]);
    for(int i=0;i<6;i++)
    {
        int k=i;
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]>arr[j])
            {
                k=j;
            }
        }
        int tmp = arr[i];
        arr[i]=arr[k];
        arr[k]=tmp;
    }
    //printf("arr[0]=%d\n",arr[0]);
    for(int i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }
}