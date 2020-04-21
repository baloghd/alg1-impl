#include <iostream>
#include <array>
#include <cmath>

template<class T, std::size_t SIZE>
void printArray(std::array<T, SIZE>&A) 
{
    std::cout << "[";
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << A[i];
        if (i < SIZE - 1)
        {
            std::cout << " | ";
        }
    }
    std::cout << "]\n";
}

template<std::size_t SIZE>
int binSearch(std::array<int, SIZE>& A, int u, int v, int x)
{
    std::cout << "1 lépés\n";
    if (u > v)
    {
        return 0;
    } else {
        int m = std::floor((u + v) / 2);
        if (A[m] > x) {
            return binSearch(A, u, m - 1, x);
        } else if (A[m] < x) {
            return binSearch(A, m + 1, v, x);
        } else {
            return m;
        }
    }
}

template<std::size_t SIZE>
int binarySearch(std::array<int, SIZE>& A, int x)
{
    std::cout << "1 függvényhívás\n";
    return binSearch(A, 0, A.size() - 1, x);
}

int main() 
{
    std::array<int, 6> array = {1, 3, 7, 10, 18, 26};
    printArray(array);
    int x = 7;
    std::cout << binarySearch(array, x) << '\n';
    return 0;
}