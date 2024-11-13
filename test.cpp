#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int num = 0;
void pai(int begin, int end,int data[]) {
    int i;
    if (begin == end)num++;
    else {
        for (i = begin;i <= end;i++) {
            swap(data[begin], data[i]);
            pai(begin + 1, end, data);
            swap(data[begin], data[i]);
        }
    }
}
int main()
{
    int data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
    clock_t start, end;
    start = clock();
    pai(0, 11,data);
    end = clock();
    cout << (double)(end - start) / CLOCKS_PER_SEC <<"s" << endl;
    return 0;
}