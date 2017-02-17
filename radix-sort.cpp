//============================================================================
// Name        : radix-sort.cpp
// Author      : All
// Date        :
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

<<<<<<< HEAD
int getMax(int A[], int size)
{
    int max = A[0];
    for (int i = 1; i < size; i++)
        if (A[i] > max)
            max = A[i];
    return max;
}

void countSort(int A[], int size, int exp)
{
    int output[size];
    int i, count[10] = {0};
    for (i = 0; i < size; i++)
        count[(A[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = size - 1; i >= 0; i--)
    {
        output[count[(A[i] / exp) % 10] - 1] = A[i];
        count[(A[i] / exp) % 10]--;
    }
    for (i = 0; i < size; i++)
        A[i] = output[i];
}

void
RadixSort::sort(int A[], int size)
{   
    int m = getMax(A, size);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(A, size, exp);
}
=======
void
RadixSort::sort(int A[], int size)
{
  /*
     Complete this function with the implementation of radix sort
     algorithm.
  */
}
>>>>>>> insertion
