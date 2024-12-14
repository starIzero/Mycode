#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
using namespace std;

void swap(int &a,int &b);
int partition(int arr[], int low, int high);
void quickSort(int arr[],int low,int high);
void print(const int arr[],int length);

#endif 