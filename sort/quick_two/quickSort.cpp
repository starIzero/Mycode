//Ë«Â·¿ìËÙÅÅÐò
#include <iostream>
#include "quickSort.h"
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int arr[], int low, int high)
{
    swap(arr[low + rand() % (high - low + 1)], arr[high]);
    int pivot = arr[high];
    int i = low - 1;
    int j = high + 1;
    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i >= j) return j;
        swap(arr[i], arr[j]);
    }
}

void quickSort(int arr[],int low,int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
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

int main()
{
    int arr[]={4,6,2,3,1,5,7,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    print(arr,length);
    quickSort(arr,0,length-1);
    print(arr,length);
}