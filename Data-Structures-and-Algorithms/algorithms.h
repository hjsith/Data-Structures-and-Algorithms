#pragma once
#include <array>

int Factorial(int n)
{
	return n <= 1 ? 1 : Factorial(n - 1) * n;
}

void Insertion_Sort(int a[], size_t n)
{
	for (int j = 1; j < n; ++j)
	{
		int key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > key)
		{
			a[i + 1] = a[i];
			i -= 1;
		}
		a[i + 1] = key;
	}
}