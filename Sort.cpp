#include "Sort.h"

template <class T>
int Sort::Shellsort(T** MassPointer, int num) {
    int i, j, h;
    COUNT = 0;
    for (h = 1; h <= num / 9; h = h * 3 + 1);
    while (h >= 1){
        for (i = h; i < num; i++)
            for (j = i - h; j >= 0 && *MassPointer[j] > *MassPointer[j + h]; j -= h){
                swap(MassPointer[j], MassPointer[j + h]);
                COUNT++;
            }
        h = (h - 1) / 3;
    }
    return COUNT;
};