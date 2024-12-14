//Ï£¶ûÅÅĞòËã·¨
#include <iostream>
#include "shellSort.h"
using namespace std;

void shellSort(int arr[],int length)
{
    for(int gap=length/2;gap>0;gap/=2)
    {
        for(int i=gap;i<length;i++)
        {
            int temp=arr[i];
            int j;
            for(j=i;j>=gap && arr[j-gap]>temp;j-=gap)
            {
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
        }
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
    shellSort(arr,length);
    print(arr,length);
    return 0;
}