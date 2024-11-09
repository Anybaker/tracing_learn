#include <stdio.h>

int partial(int arr[],int low,int high);
void quick_sort(int arr[],int low,int high);
void swap(int arr[],int i,int j)
{
    int tmp=arr[j];
    arr[j]=arr[i];
    arr[i]=tmp;
}

int main()
{
    int arr[7]={1,5,7,9,10,23,12};
    quick_sort(arr,0,6);//0 len-1
    for (int i=0;i<7;i++)
    {
        printf("%d\n",arr[i]);
    }

}

int partial(int arr[],int low,int high)
{
    int i=low,j=high;
    while(i<j)
    {
        while(i<j && arr[j]>=arr[low])//小的时候跳出
        {
            j--;
        }
        while(i<j && arr[i]<=arr[low])//大的时候跳出
        {
            i++;
        }
        swap(arr,i,j);
    }
    swap(arr,i,low);
    return i;
}

void quick_sort(int arr[],int low,int high)
{
    if(low>=high){return;}
    int pivot = partial(arr,low,high);
    quick_sort(arr,low,pivot-1);
    quick_sort(arr,pivot+1,high);
}