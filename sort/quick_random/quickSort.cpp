//随机化快速排序算法
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "quickSort.h"
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int partition(int arr[],int low,int high)
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int random_num=low+rand()%(high-low+1);
    swap(arr[random_num],arr[high]);

    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
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
    return 0;
}