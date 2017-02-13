//============================================================================
// Name        : shell-sort.cpp
// Author      : Tate Walker
// Date        : 2-13-17
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
ShellSort::sort(int A[], int size)
{
  int step, i, j, temp;



    for (step = size/2; step > 0; step /= 2){

        for (i = step; i < size; i++){

            for (j=i-step; j>=0 && A[j]>A[j+step]; j-=step) {

                temp = A[j];

                A[j] = A[j+step];

                A[j+step] = temp;
            }
        }
    }
}
