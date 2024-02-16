#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    
    Sort <int> Solution;

    int* A; int num;
    cin >> num;

    A = new int[num];
    int** Ap = new int* [num];

    for (int i = 0; i < num; i++)
    {
        A[i] = rand() % 100;
        Ap[i] = &A[i];
    }

    Solution.Shellsort(Ap, num);
}
