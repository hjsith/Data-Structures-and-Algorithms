#include "pch.h"
#include "../Data-Structures-and-Algorithms/algorithms.h"

// Tests factorial of 0.
namespace AlgorithmTests
{
	TEST(FactorialTest, HandlesZeroInput) {
		EXPECT_EQ(Factorial(0), 1);
	}

	// Tests factorial of positive numbers.
	TEST(FactorialTest, HandlesPositiveInput) {
		EXPECT_EQ(Factorial(1), 1);
		EXPECT_EQ(Factorial(2), 2);
		EXPECT_EQ(Factorial(3), 6);
		EXPECT_EQ(Factorial(8), 40320);
	}

}