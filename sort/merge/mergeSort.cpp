//¹é²¢ÅÅĞòËã·¨
#include <iostream>
#include "mergeSort.h"
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int arr1[n1],arr2[n2];

    for(int i=0;i<n1;i++) arr1[i]=arr[left+i];
    for(int j=0;j<n2;j++) arr2[j]=arr[mid+1+j];

    int i=0,j=0,k=left;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j]) arr[k++]=arr1[i++];
        else                 arr[k++]=arr2[j++];
    }

    while(i<n1) {arr[k++]=arr1[i++];}
    while(j<n2) {arr[k++]=arr2[j++];}
}

void mergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
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
    int length=sizeof(arr)/sizeof(arr[0]);
    print(arr,length);
    mergeSort(arr,0,length-1);
    print(arr,length);
}