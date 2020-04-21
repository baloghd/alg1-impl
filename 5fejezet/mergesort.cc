#include <iostream>
#include <array>
#include <vector>
#include <cmath>

template<class T, std::size_t SIZE>
void printArray(std::array<T, SIZE>& A)
{
	std::cout << "[";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << A[i];
	}
	std::cout << "]\n";
}

template<class T, std::size_t SIZE>
void merge(std::array<T, SIZE>& A, int u, int m, int v)
{
	std::cout << "merge was called with u="<< u << ", m=" << m << ", v=" << v << '\n';
	std::cout << "before merging:\n";
	printArray(A);

	const size_t d = m - u;
	std::vector<T> Z;
	for (int it = u; it < m; ++it)
	{
		Z.push_back(A[it]);
	}
	int k = u;
	int j = 0;
	int i = m;
	while ((i < v) && (j < d))
	{
		if (A[i] < Z[j])
		{
			std::cout << A[i] << " is smaller than " << Z[j] << ", so it was chosen!\n";
			A[k] = A[i];
			i++;
		} else {
			std::cout << Z[j] << " is smaller than " << A[i] << ", so it was chosen!\n";
			A[k] = Z[j];
			j++;
		}

		k++;
	}
	while (j < d)
	{
		A[k] = Z[j];
		k++;
		j++;
	}

	std::cout << "after merging: \n";
	printArray(A);

}


template<class T, std::size_t SIZE>
void ms(std::array<T, SIZE>& A, int u, int v)
{
	std::cout << "ms was called with u="<< u << ", v=" << v << '\n';
	if (u < v - 1)
	{
		int m = std::floor((u + v) / 2);
		ms(A, u, m);
		ms(A, m, v);
		merge(A, u, m, v);
	}
}

	
template<class T, std::size_t SIZE>
void mergeSort(std::array<T, SIZE>& A)
{
	ms(A, 0, SIZE);
}



int main()
{
	std::array<int, 7> A = {6,3, 2, 5, 1, 0, 4};
	printArray(A);
	mergeSort(A);
	printArray(A);
	return 0;
}

