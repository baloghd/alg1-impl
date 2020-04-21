#include <iostream>
#include <array>

#include "utils.h"

template<class T, std::size_t SIZE>
void insertionSort(std::array<T, SIZE>& A)
{
    for (int i = 1; i < SIZE; ++i)
    {
        if (A[i - 1] > A[i])
        {
            T x = A[i];
            A[i] = A[i - 1];
            int j = i - 2;
            while ((j > 0) && A[j - 1] > x)
            {
                A[j + 1] = A[j];
                j--;
            }
            A[j + 1] = x;
        }
    }
}

int main()
{
    //using utils::printArray;
    std::array<int, 5> A = {5, 2, 4, 7, 6};
    utils::printArray(A);
    insertionSort(A);
    utils::printArray(A);
    return 0;
}