#include <iostream>

void swap(int * x, int * y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main() 
{
    int a = 5;
    int b = 10;
    std::cout << "a = " << a << ", b = " << b << '\n';
    swap(&a, &b);
    std::cout << "SWAP!\n";
    std::cout << "a = " << a << ", b = " << b << '\n';
    return 0;
}