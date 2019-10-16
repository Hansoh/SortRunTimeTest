#ifndef HEAPSORT_HH
#define HEAPSORT_HH


class HeapSort{

    static void heapfy(int *tab,int heapSize,int i);
    static void buildHeap(int *tab, int size);

public:
    static void sort(int *tab, int size);


};

#endif // HEAPSORT_HH
