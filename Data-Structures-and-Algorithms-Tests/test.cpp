#include "pch.h"
#include "../Data-Structures-and-Algorithms/algorithms.h"
#include "../Data-Structures-and-Algorithms/data-structures.h"

// Tests factorial of 0.
namespace AlgorithmTests
{
}

namespace DataStructureTests
{
	TEST(SimpleVectorTest, ReturnsSize)
	{
		SimpleVector<int> testVector (5);

		EXPECT_EQ(testVector.size(), 1);
	}
}