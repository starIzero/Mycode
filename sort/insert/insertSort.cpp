//≤Â»Î≈≈–ÚÀ„∑®
#include <iostream>
#include "insertSort.h"
using namespace std;

void insertSort(int arr[],int length)
{
    
    for(int i=1;i<length;i++)
    {
        int key = arr[i];
        int j=i-1;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>key)
            {
                arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=key;
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
    int arr[]={7,6,9,3,1,5,2,4};
    int length = sizeof(arr)/sizeof(arr[0]);
    print(arr,length);
    insertSort(arr,length);
    print(arr,length);
    return 0;
}