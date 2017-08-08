#include <string>
#include "gtest/gtest.h"
#include "Stack.h"

TEST(testStack, stackTest)
{
	Stack<int> testingStack;
	testingStack.push(500);
	testingStack.push(0);
	testingStack.push(-420);

	ASSERT_TRUE(testingStack.isEmpty() == false);

	EXPECT_EQ(testingStack.peek(), -420);
	EXPECT_EQ(testingStack.pop(), -420);

	EXPECT_EQ(testingStack.peek(), 0);
	EXPECT_EQ(testingStack.pop(), 0);

	EXPECT_EQ(testingStack.peek(), 500);
	EXPECT_EQ(testingStack.pop(), 500);

	ASSERT_TRUE(testingStack.isEmpty() == true);
}


TEST(testStack, pushConstTest)
{
	Stack<std::string> testingStack;
	const std::string s1 = "Testing Nr. 1";
	const std::string s2 = "Testing Nr. 2";
	const std::string s3 = "Testing Nr. 3";

	ASSERT_TRUE(testingStack.isEmpty() == true);

	testingStack.push(s1);
	EXPECT_EQ(testingStack.peek(), "Testing Nr. 1");
	testingStack.push(s2);
	EXPECT_EQ(testingStack.peek(), "Testing Nr. 2");
	testingStack.push(s3);
	EXPECT_EQ(testingStack.peek(), "Testing Nr. 3");

	testingStack.push("Non Const String Nr. 1");
	EXPECT_EQ(testingStack.peek(), "Non Const String Nr. 1");
	testingStack.push("Non Const String Nr. 2");
	EXPECT_EQ(testingStack.peek(), "Non Const String Nr. 2");
	testingStack.push("Non Const String Nr. 3");
	EXPECT_EQ(testingStack.peek(), "Non Const String Nr. 3");

	ASSERT_TRUE(testingStack.isEmpty() == false);

	EXPECT_EQ(testingStack.pop(), "Non Const String Nr. 3");
	EXPECT_EQ(testingStack.pop(), "Non Const String Nr. 2");
	EXPECT_EQ(testingStack.pop(), "Non Const String Nr. 1");
	EXPECT_EQ(testingStack.pop(), "Testing Nr. 3");
	EXPECT_EQ(testingStack.pop(), "Testing Nr. 2");
	EXPECT_EQ(testingStack.pop(), "Testing Nr. 1");

	ASSERT_TRUE(testingStack.isEmpty() == true);
}


TEST(testStack, pushAndPopTest)
{
	//
	// Testing with integer stack.
	//
	Stack<int> testingStackInt;
	
	testingStackInt.push(9001);
	EXPECT_EQ(testingStackInt.peek(), 9001);
	testingStackInt.push(-400532);
	EXPECT_EQ(testingStackInt.peek(), -400532);
	testingStackInt.push(0);
	EXPECT_EQ(testingStackInt.peek(), 0);

	ASSERT_TRUE(testingStackInt.isEmpty() == false);

	EXPECT_EQ(testingStackInt.pop(), 0);
	EXPECT_EQ(testingStackInt.pop(), -400532);
	EXPECT_EQ(testingStackInt.pop(), 9001);

	ASSERT_TRUE(testingStackInt.isEmpty() == true);
	
	//
	// Testing with string stack.
	//
	Stack<std::string> testingStackString;

	testingStackString.push("Testing Nr. 1");
	EXPECT_EQ(testingStackString.peek(), "Testing Nr. 1");
	testingStackString.push("Testing Nr. 2");
	EXPECT_EQ(testingStackString.peek(), "Testing Nr. 2");
	testingStackString.push("Testing Nr. 3");
	EXPECT_EQ(testingStackString.peek(), "Testing Nr. 3");

	ASSERT_TRUE(testingStackString.isEmpty() == false);
	
	EXPECT_EQ(testingStackString.pop(), "Testing Nr. 3");
	EXPECT_EQ(testingStackString.pop(), "Testing Nr. 2");
	EXPECT_EQ(testingStackString.pop(), "Testing Nr. 1");

	ASSERT_TRUE(testingStackString.isEmpty() == true);
}

TEST(testStack, getSizeTest)
{
	Stack<char> testingStack;

	EXPECT_EQ(testingStack.getSize(), 0);
	testingStack.push('a');

	EXPECT_EQ(testingStack.getSize(), 1);
	testingStack.push('b');

	EXPECT_EQ(testingStack.getSize(), 2);
	testingStack.push('c');

	EXPECT_EQ(testingStack.getSize(), 3);
	testingStack.push('d');

	EXPECT_EQ(testingStack.getSize(), 4);
	testingStack.push('e');

	EXPECT_EQ(testingStack.getSize(), 5);
	EXPECT_EQ(testingStack.pop(), 'e');

	EXPECT_EQ(testingStack.getSize(), 4);
	EXPECT_EQ(testingStack.pop(), 'd');

	EXPECT_EQ(testingStack.getSize(), 3);
	EXPECT_EQ(testingStack.pop(), 'c');

	EXPECT_EQ(testingStack.getSize(), 2);
	EXPECT_EQ(testingStack.pop(), 'b');

	EXPECT_EQ(testingStack.getSize(), 1);
	EXPECT_EQ(testingStack.pop(), 'a');

	EXPECT_EQ(testingStack.getSize(), 0);
	ASSERT_TRUE(testingStack.isEmpty() == true);
}

TEST(testStack, clearTest)
{
	Stack<int> testingStack;
	testingStack.push(4001);
	testingStack.push(5001);
	testingStack.push(6001);
	testingStack.push(7001);
	testingStack.push(8001);

	ASSERT_TRUE(testingStack.isEmpty() == false);
	EXPECT_EQ(testingStack.getSize(), 5);
	testingStack.clear();

	ASSERT_TRUE(testingStack.isEmpty() == true);
	EXPECT_EQ(testingStack.getSize(), 0);

	testingStack.push(-500);
	testingStack.push(5051);
	testingStack.push(6021);
	testingStack.push(7501);
	testingStack.push(8321);

	ASSERT_TRUE(testingStack.isEmpty() == false);
	EXPECT_EQ(testingStack.getSize(), 5);

	EXPECT_EQ(testingStack.pop(), 8321);
	EXPECT_EQ(testingStack.getSize(), 4);

	testingStack.clear();

	ASSERT_TRUE(testingStack.isEmpty() == true);
	EXPECT_EQ(testingStack.getSize(), 0);
}