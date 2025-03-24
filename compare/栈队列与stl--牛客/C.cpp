#include <cstdio>
  
  int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int a=0;a<n;a++)
        for(int b=a+1;b<n;b++)
            for(int c=b+1;c<n;c++)
                if(arr[a]+arr[b]>arr[c])
                    if(arr[a]+arr[c]>arr[b])
                        if(arr[b]+arr[c]>arr[a])
                        {
                            printf("%d %d %d",arr[a],arr[b],arr[c]);
                            return 0;
                        }
    printf("No solution");
    return 0;
}