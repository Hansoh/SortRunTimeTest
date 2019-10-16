#ifndef INTARRAYGENERATOR_HH
#define INTARRAYGENERATOR_HH
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
 vector<int> intVectorGenerator(int size, int arrangement, bool reversed)
{
    vector<int> arr(size);
    int i = 0;
    if (arrangement != 0)
        for (; i < (size * arrangement) / 100; i++)
        {
            arr.at(i) = i;
        }

    for (; i < size; i++)
    {
        arr.at(i) = rand() % (1000000 - i) + i;
    }
    if (reversed)
    {
        vector<int> arr2(size);

        for (; i < size; i++)
            arr2.at(i) = arr.at(size - 1 - i);
        return arr2;
    }
    return arr;
}

int* intArrayGenerator(int size, int arrangement, bool reversed)
{
    int arr[size];
    int i = 0;
    if (arrangement != 0)
        for (; i < (size * arrangement) / 100; i++)
        {
            arr[i] = i;
        }

    for (; i < size; i++)
    {
        arr[i] = rand() % (1000000 - i) + i;
    }
    if (reversed)
    {
        int arr2[size];

        for (; i < size; i++)
            arr2[i] = arr[size - 1 - i];
        return arr2;
    }
    return arr;
}
#endif // INTARRAYGENERATOR_HH
