#include <vector>
#include "gtest/gtest.h"
#include "BubbleSort.h"

TEST(testBubbleSort, testSort)
{
	std::vector<int> unsortedList{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	sort(unsortedList);

	EXPECT_EQ(unsortedList.at(0), 0);
	EXPECT_EQ(unsortedList.at(1), 1);
	EXPECT_EQ(unsortedList.at(2), 2);
	EXPECT_EQ(unsortedList.at(3), 3);
	EXPECT_EQ(unsortedList.at(4), 4);
	EXPECT_EQ(unsortedList.at(5), 5);
	EXPECT_EQ(unsortedList.at(6), 6);
	EXPECT_EQ(unsortedList.at(7), 7);
	EXPECT_EQ(unsortedList.at(8), 8);
	EXPECT_EQ(unsortedList.at(9), 9);
}

//
// Add function that builds random list and
// add test for some random lists.
//