#include <iostream>
#include <cmath>
#include <array>

#include "utils.h"

template<class T, std::size_t SIZE>
void selectionSort(std::array<T, SIZE>& A)
{
    for (int i = 0; i < SIZE - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < SIZE; ++j)
        {
            if (A[min_idx] > A[j])
                min_idx = j;
        }
        utils::swap(A[min_idx], A[i]);
    }
}

int main()
{
    std::array<int, 5> A = {2, 8, 6, 5, 4};
    selectionSort(A);
    utils::printArray(A);
    return 0;
}