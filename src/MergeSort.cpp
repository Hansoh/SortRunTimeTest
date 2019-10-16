#include "../inc/MergeSort.hh"

MergeSort::merge(int arr[], int p, int q, int r)
    {
        int ar1Size, ar2Size, i, j, k;
        ar1Size = q - p + 1;
        ar2Size = r - q;
        int ar1[ar1Size], ar2[ar2Size];

        for(i = 0; i < ar1Size; i++)
            ar1[i] = arr[p+1];

        for(j = 0; j < ar2Size; j++)
            ar2[j] = arr[q+j+1];
        i = 0;
        j = 0;

        for (k = p; (i < ar1Size) && (j < ar2Size); k++)
            if(ar1[i] < ar2 [j])
                arr[k] = ar1[i++];
            else
                arr[k] = ar2[j++];
        while(j < ar2Size)
            arr[k++] = ar2[j++];
    }

void MergeSort::mSort(int arr[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        mSort(arr, p, q);
        mSort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}

void MergeSort::sort(int arr[], int size)
{
    mSort(arr, 0, size);
}
