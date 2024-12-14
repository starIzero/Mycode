#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right);
void mergeSort(int arr[],int left,int right);
void print(const int arr[],int length);

#endif