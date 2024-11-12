selection sort 
O(N^2) 
最常规 双遍历 记录下标 第一层循环内交换

insertion sort
O(N^2)
较短常用 无help/tmp ***从当下开始***

bubble sort
O(N^2)
相邻元素连续比较 多次交换 

merge sort
O(nlogn)
取中间值左右分治再merge merge过程及排序过程 双指针 递归

quick sort
O(nlogn)
part一次得到基准值第二个位置 哨兵储存基准 左右分治 多层while 双while后交换位置 跳出while后调出基准值 返回基准值位置

//设计“+1”操作（双层循环）需要注意第一层循环的右界