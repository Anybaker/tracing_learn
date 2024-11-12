#include<stdio.h>;

void swap(int nums[], int i, int j);
int partition(int nums[], int left, int right);
void quickSort(int nums[], int left, int right);

int main()
{
    int arr[]={7,9,10,23,12};
    quickSort(arr,0,4);//0 len-1
    for (int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

}


/* 元素交换 */
void swap(int nums[], int i, int j) {
    int tmp = nums[i];
    nums[i] = nums[j];
    nums[j] = tmp;
}

/* 哨兵划分 */
int partition(int nums[], int left, int right) {
    // 以 nums[left] 为基准数
    int i = left, j = right;
    while (i < j) {
        while (i < j && nums[j] >= nums[left]) {
            j--; // 从右向左找首个小于基准数的元素
        }
        while (i < j && nums[i] <= nums[left]) {
            i++; // 从左向右找首个大于基准数的元素
        }
        // 交换这两个元素
        swap(nums, i, j);
    }
    // 将基准数交换至两子数组的分界线
    swap(nums, i, left);
    // 返回基准数的索引
    return i;
}

/* 快速排序 */
void quickSort(int nums[], int left, int right) {
    // 子数组长度为 1 时终止递归
    if (left >= right) {
        return;
    }
    // 哨兵划分
    int pivot = partition(nums, left, right);
    // 递归左子数组、右子数组
    quickSort(nums, left, pivot - 1);
    quickSort(nums, pivot + 1, right);
}