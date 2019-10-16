#include "../inc/InsertionSort.hh"

void InsertionSort::sort(int arr[], int size)
{
    int i, j, temp;


    for (i = 1; i < size; i++)
    {
        j = i;

        while(j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}
