#include <cstdio>

long long cnt;
int n;
void check(int arr[],int L,int R);
void merge(int arr[],int L,int M,int R);
int main()
{
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    check(arr,0,n-1);
    printf("%lld",cnt);
    return 0;

}
void check(int arr[],int L,int R)
{
    if(L>=R) return;
    else{
        int M = L + (R-L)/2;
        check(arr,L,M);
        check(arr,M+1,R);
        merge(arr,L,M,R);
    }
}
void merge(int arr[],int L,int M,int R)
{
    int j=0,p1=L,p2=M+1,tmp;
    int help[R-L+1];

    while(p1<=M && p2<=R){
        if(arr[p1]>arr[p2]){
            help[j++] = arr[p1++];
            cnt += R-p2+1;
        }
        else
            help[j++] = arr[p2++];
    }
        //help[j++] = arr[p1]>=arr[p2]?arr[p1++],cnt+=R-p2+1:arr[p2++];
    while(p1<=M)
        help[j++]=arr[p1++];
    while(p2<=R)
        help[j++]=arr[p2++];

    int len=R-L+1;
    for(int i=0;i<len;i++)
        arr[L+i] = help[i];
}