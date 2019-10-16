#ifndef MERGESORT_HH
#define MERGESORT_HH


class MergeSort{
    static int merge(int arr[], int p, int q, int r);
    static void mSort(int arr[], int p, int r);
public:
    static void sort(int arr[], int size);

};


#endif // MERGESORT_HH

