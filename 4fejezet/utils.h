#ifndef _UTILS_H
#define _UTILS_H

#include <array>

namespace utils {
    template<class T, std::size_t SIZE>
    void printArray(std::array<T, SIZE>& A)
    {
        std::cout << "[";
        for (int i = 0; i < SIZE; ++i)
        {
            std::cout << A[i] << "";
            if (i < SIZE - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << "]\n";
    }

    template<class T>
    void swap(T &x, T &y)
    {
        T z = x;
        x = y;
        y = z;
    }
}

#endif 