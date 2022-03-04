#pragma once

int Factorial(int n)
{
	return n <= 1 ? 1 : Factorial(n - 1) * n;
}