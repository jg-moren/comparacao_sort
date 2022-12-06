#ifndef SORT
#define SORT

#include <stdio.h>
void bubble_rec(int *v, int size);
void bubble_ite(int *v, int size);
void merge_sort(int arr[], int l, int r);
void quick_sort(int arr[], int low, int high);

#endif