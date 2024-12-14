#include <iostream>
#include <cstdlib>
#include <ctime>
#include "quickSort.h"
using namespace std;

// 交换两个元素的函数
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// 三路快速排序的划分函数
void partition(int arr[], int low, int high, int& lt, int& gt) {
    // 随机选择一个位置的元素作为基准
    swap(arr[low + rand() % (high - low + 1)], arr[high]);
    int pivot = arr[high];
    lt = low - 1;
    gt = high;
    int i = low;
    while (i < gt) {
        if (arr[i] < pivot) {
            lt++;
            swap(arr[lt], arr[i]);
            i++;
        } else if (arr[i] > pivot) {
            gt--;
            swap(arr[gt], arr[i]);
        } else {
            i++;
        }
    }
    // 将基准元素放到正确位置
    swap(arr[gt], arr[high]);
    lt++;
    gt--;
}

// 三路快速排序递归函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int lt, gt;
        partition(arr, low, high, lt, gt);
        quickSort(arr, low, lt - 1);
        quickSort(arr, gt + 1, high);
    }
}

void print(const int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {4,6,2,3,1,5,7,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    print(arr,length);
    quickSort(arr, 0, length - 1);
    print(arr, length);
    return 0;
}