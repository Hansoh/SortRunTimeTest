#include "../inc/HeapSort.hh"

void HeapSort::heapfy(int *tab,int heapSize,int i)
    {
        int temp;
        int largest;
        int left = i * 2;
        int right = (i * 2) + 1;

        if (left <= heapSize && tab[left] > tab[i])
            largest = left;
        else largest = i;

        if (right <=heapSize && tab[right] > tab[largest])
            largest = right;

        if (largest != i)
        {
            temp = tab[largest];
            tab[largest]=tab[i];
            tab[i] = temp;
            heapfy(tab, heapSize, largest);
        }

    }

void HeapSort::buildHeap(int *tab, int size)
{
    for (int i = size / 2; i > 0; i--)
        heapfy(tab, size, i);
}

void HeapSort::sort(int *tab, int size)
{
    int temp;

    buildHeap(tab,size);
    for (int i = size; i > 0; i--)
    {
        temp = tab[i];
        tab[i] = tab[0];
        tab[0] = temp;
        size--;
        heapfy(tab, size, 0);

    }

}
