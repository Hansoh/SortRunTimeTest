#ifndef QUICKSORT_HH
#define QUICKSORT_HH
#include<iostream>
using namespace std;

class QuickSort{
    static void quickSort(int arr[], int low, int high);
    static int partition(int arr[], int p, int r);
public:
    static void sort(int arr[], int size){
        quickSort(arr, 0, size);}
};







#endif // QUICKSORT_HH

