#include <iostream>
using namespace std;

//二分查找中重要的是边界问题 而非“中间值”到底在哪里
int main()
{
    int n=8;
    int a[n]={1,3,5,6,8,23,24,25};
    //[  ,  ]型 查找数组升序排列
    int left = 0;int right = n-1;
    int target = 25;
    int mid;
    while(left <= right)
    {
        mid = left + ((right-left)/2);
    if(a[mid]>target)//中间值大 那么舍弃右半部分
    {
        right = mid-1;
    }
    else if(a[mid]<target)//中间值小，那么舍弃作伴部分
    {
        left = mid +1;
    }
    else{break;}
    }
    if(a[mid]!=target){cout << "no elements found!!";}
    else cout<<"found!!"<<a[mid];

}