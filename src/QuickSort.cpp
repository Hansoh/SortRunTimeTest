#include "../inc/QuickSort.hh"

int QuickSort::partition(int arr[], int p, int r)
{
    int x = arr[p];
    int i = p, j = r, w;
    while (true)
    {
        while (arr[j] > x)
            j--;
        while (arr[i] < x)
            i++;
        if (i < j)
        {
            w = arr[i];
            arr[i] = arr[j];
            arr[j] = w;
            i++;
            j--;
        }
        else
            return j;
    }
}

void QuickSort::quickSort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(arr,p,r);
        quickSort(arr, p, q);
        quickSort(arr, q+1, r);
    }
}

