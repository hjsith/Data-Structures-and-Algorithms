#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../Data-Structures-and-Algorithms/algorithms.h"
#include "../Data-Structures-and-Algorithms/data-structures.h"
#include "../Data-Structures-and-Algorithms-Tests/testing-objects.h"
#include <stdexcept>

using namespace testing;
using namespace std;

namespace AlgorithmTests
{
	TEST(InsertionSortTest, SortsArrayCorrectly)
	{
		int t1[1];
		int t2[20];
		int t3[50];
		int t4[72];
		copy(begin(testDataOne), end(testDataOne), t1);
		copy(begin(testDataTwo), end(testDataTwo), t2);
		copy(begin(testDataThree), end(testDataThree), t3);
		copy(begin(testDataFour), end(testDataFour), t4);

		Insertion_Sort(t1, sizeof(t1) / sizeof(*t1));
		Insertion_Sort(t2, sizeof(t2) / sizeof(*t2));
		Insertion_Sort(t3, sizeof(t3) / sizeof(*t3));
		Insertion_Sort(t4, sizeof(t4) / sizeof(*t4));

		ASSERT_THAT(t1, ElementsAreArray(sortedTestDataOne));
		ASSERT_THAT(t2, ElementsAreArray(sortedTestDataTwo));
		ASSERT_THAT(t3, ElementsAreArray(sortedTestDataThree));
		ASSERT_THAT(t4, ElementsAreArray(sortedTestDataFour));
	}
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

	TEST(SimpleVectorTest, ReturnsAtIndexCorrectly)
	{
		SimpleVector<int> testVectorTwo(testDataTwo, sizeof(testDataTwo) / sizeof(*testDataTwo));

		EXPECT_EQ(testVectorTwo.at(18), 19);
		EXPECT_THROW(testVectorTwo.at(34), const char*);
	}
}