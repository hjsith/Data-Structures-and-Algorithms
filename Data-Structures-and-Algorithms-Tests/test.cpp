#include "pch.h"
#include "../Data-Structures-and-Algorithms/algorithms.h"
#include "../Data-Structures-and-Algorithms/data-structures.h"
#include "../Data-Structures-and-Algorithms-Tests/testing-objects.h"

namespace AlgorithmTests
{
}

namespace DataStructureTests
{
	TEST(SimpleVectorTest, ReturnsSizeCorrectly)
	{
		SimpleVector<int> testVectorOne(testDataOne, sizeof(testDataOne) / sizeof(*testDataOne));
		SimpleVector<int> testVectorTwo(testDataTwo, sizeof(testDataTwo) / sizeof(*testDataTwo));
		SimpleVector<int> testVectorThree(testDataThree, sizeof(testDataThree) / sizeof(*testDataThree));
		SimpleVector<int> testVectorFour(testDataFour, sizeof(testDataFour) / sizeof(*testDataFour));

		EXPECT_EQ(testVectorOne.size(), 1);
		EXPECT_EQ(testVectorTwo.size(), 20);
		EXPECT_EQ(testVectorThree.size(), 50);
		EXPECT_EQ(testVectorFour.size(), 72);
	}

	TEST(SimpleVectorTest, ReturnsCapacityCorrectly)
	{
		SimpleVector<int> testVectorOne(testDataOne, sizeof(testDataOne) / sizeof(*testDataOne));
		SimpleVector<int> testVectorTwo(testDataTwo, sizeof(testDataTwo) / sizeof(*testDataTwo));
		SimpleVector<int> testVectorThree(testDataThree, sizeof(testDataThree) / sizeof(*testDataThree));
		SimpleVector<int> testVectorFour(testDataFour, sizeof(testDataFour) / sizeof(*testDataFour));

		EXPECT_EQ(testVectorOne.capacity(), 16);
		EXPECT_EQ(testVectorTwo.capacity(), 32);
		EXPECT_EQ(testVectorThree.capacity(), 64);
		EXPECT_EQ(testVectorFour.capacity(), 128);
	}

	TEST(SimpleVectorTest, ReturnsIsEmptyCorrectly)
	{
		SimpleVector<int> testEmptyVector;
		SimpleVector<int> testVectorOne(testDataOne, sizeof(testDataOne) / sizeof(*testDataOne));

		EXPECT_EQ(testEmptyVector.is_empty(), true);
		EXPECT_EQ(testVectorOne.is_empty(), false);
	}
}