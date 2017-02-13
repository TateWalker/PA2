//============================================================================
// Name        : insertion-sort.cpp
// Author      : Tate Walker
// Date        : 2-11-17
// Copyright   : Tate Walker
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"
//using namespace std;



void InsertionSort::sort(int A[], int size)				// main entry point
{
    int j;
    int temp;
    for (int i = 0; i<size; i++) {
        j = i;
        
        while (j>0 && A[j] < A[j-1]) {
            temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            j--;
        }
    }
    
    
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
//
//int main(){
//    int A[5] = {4,5,3,2,6};
//    int B = InsertionSort(A, 5);
//    std::cout<<B;
//    
//}
