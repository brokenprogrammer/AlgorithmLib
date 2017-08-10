#include <vector>
#include "gtest/gtest.h"
#include "LinearSearch.h"

TEST(testLinearSearch, testSearch)
{
	std::vector<int> test1(4, 100);

	ASSERT_TRUE(search(test1, 100));
	ASSERT_FALSE(search(test1, 50));

	std::vector<int> test2{1, 2, 3, 4, 5, 0, -1, -2, -3};

	ASSERT_TRUE(search(test2, 1));
	ASSERT_TRUE(search(test2, 2));
	ASSERT_TRUE(search(test2, 3));
	ASSERT_TRUE(search(test2, 4));
	ASSERT_TRUE(search(test2, 5));
	ASSERT_TRUE(search(test2, 0));
	ASSERT_TRUE(search(test2, -1));
	ASSERT_TRUE(search(test2, -2));
	ASSERT_TRUE(search(test2, -3));

	ASSERT_FALSE(search(test2, -4));
	ASSERT_FALSE(search(test2, -5));
	ASSERT_FALSE(search(test2, 6));

}

TEST(testLinearSearch, testFind)
{
	std::vector<int> test(4, 100);
	EXPECT_EQ(find(test, 100), 0);
	EXPECT_EQ(find(test, 50), -1);

	std::vector<int> test2{ 1, 2, 3, 4, 5, 0, -1, -2, -3 };

	EXPECT_EQ(find(test2, 1), 0);
	EXPECT_EQ(find(test2, 2), 1);
	EXPECT_EQ(find(test2, 3), 2);
	EXPECT_EQ(find(test2, 4), 3);
	EXPECT_EQ(find(test2, 5), 4);
	EXPECT_EQ(find(test2, 0), 5);
	EXPECT_EQ(find(test2, -1), 6);
	EXPECT_EQ(find(test2, -2), 7);
	EXPECT_EQ(find(test2, -3), 8);

	EXPECT_EQ(find(test2, -4), -1);
	EXPECT_EQ(find(test2, -5), -1);
	EXPECT_EQ(find(test2, -5050), -1);
	EXPECT_EQ(find(test2, 7002), -1);

}