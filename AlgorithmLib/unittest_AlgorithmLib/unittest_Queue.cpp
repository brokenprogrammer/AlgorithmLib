#include <string>
#include "gtest/gtest.h"
#include "Queue.h"

TEST(testQueue, queueTest)
{
	Queue<int> myQueue;

	ASSERT_TRUE(myQueue.isEmpty());

	myQueue.enqueue(12345);
	EXPECT_EQ(myQueue.peek(), 12345);
	
	myQueue.enqueue(54321);
	EXPECT_EQ(myQueue.peek(), 12345);
	
	myQueue.enqueue(-4123);
	EXPECT_EQ(myQueue.peek(), 12345);
	
	myQueue.enqueue(0);
	EXPECT_EQ(myQueue.peek(), 12345);
	
	myQueue.enqueue(-777312);
	EXPECT_EQ(myQueue.peek(), 12345);

	ASSERT_TRUE(!myQueue.isEmpty());
	EXPECT_EQ(myQueue.getSize(), 5);

	EXPECT_EQ(myQueue.dequeue(), 12345);
	EXPECT_EQ(myQueue.getSize(), 4);
	EXPECT_EQ(myQueue.dequeue(), 54321);
	EXPECT_EQ(myQueue.getSize(), 3);
	EXPECT_EQ(myQueue.dequeue(), -4123);
	EXPECT_EQ(myQueue.getSize(), 2);
	EXPECT_EQ(myQueue.dequeue(), 0);
	EXPECT_EQ(myQueue.getSize(), 1);
	EXPECT_EQ(myQueue.dequeue(), -777312);
	EXPECT_EQ(myQueue.getSize(), 0);

	ASSERT_TRUE(myQueue.isEmpty());

	const int cI = 5;
	myQueue.enqueue(cI);

	ASSERT_TRUE(!myQueue.isEmpty());
	EXPECT_EQ(myQueue.getSize(), 1);

	myQueue.clear();

	ASSERT_TRUE(myQueue.isEmpty());
	EXPECT_EQ(myQueue.getSize(), 0);

}

TEST(testQueue, enqueueConstAndDequeueTest)
{
	Queue<int> testingQueue;
	const int cI = 5;
	const int cI2 = 1412;
	const int cI3 = 0;
	const int cI4 = -440;

	ASSERT_TRUE(testingQueue.isEmpty());

	testingQueue.enqueue(cI);
	EXPECT_EQ(testingQueue.peek(), cI);
	EXPECT_EQ(testingQueue.getSize(), 1);

	testingQueue.enqueue(cI2);
	EXPECT_EQ(testingQueue.peek(), cI);
	EXPECT_EQ(testingQueue.getSize(), 2);

	testingQueue.enqueue(cI3);
	EXPECT_EQ(testingQueue.peek(), cI);
	EXPECT_EQ(testingQueue.getSize(), 3);

	testingQueue.enqueue(cI4);
	EXPECT_EQ(testingQueue.peek(), cI);
	EXPECT_EQ(testingQueue.getSize(), 4);

	ASSERT_TRUE(!testingQueue.isEmpty());
	testingQueue.clear();
	ASSERT_TRUE(testingQueue.isEmpty());

	Queue<std::string> testingQueueString;
	const std::string s1 = "Testing Nr. 1";
	const std::string s2 = "Testing Nr. 2";
	const std::string s3 = "Testing Nr. 3";

	ASSERT_TRUE(testingQueueString.isEmpty());

	testingQueueString.enqueue(s1);
	EXPECT_EQ(testingQueueString.peek(), s1);
	EXPECT_EQ(testingQueueString.getSize(), 1);

	testingQueueString.enqueue(s2);
	EXPECT_EQ(testingQueueString.peek(), s1);
	EXPECT_EQ(testingQueueString.getSize(), 2);

	testingQueueString.enqueue(s3);
	EXPECT_EQ(testingQueueString.peek(), s1);
	EXPECT_EQ(testingQueueString.getSize(), 3);

	testingQueueString.enqueue("Hello, World!");
	EXPECT_EQ(testingQueueString.peek(), s1);
	EXPECT_EQ(testingQueueString.getSize(), 4);

	ASSERT_TRUE(!testingQueueString.isEmpty());
	
	EXPECT_EQ(testingQueueString.dequeue(), s1);
	EXPECT_EQ(testingQueueString.dequeue(), s2);
	EXPECT_EQ(testingQueueString.dequeue(), s3);
	EXPECT_EQ(testingQueueString.dequeue(), "Hello, World!");

	ASSERT_TRUE(testingQueueString.isEmpty());
}

TEST(testQueue, clearTest)
{
	Queue<int> testingQueue;
	testingQueue.enqueue(4001);
	testingQueue.enqueue(5001);
	testingQueue.enqueue(6001);
	testingQueue.enqueue(7001);
	testingQueue.enqueue(8001);

	ASSERT_TRUE(testingQueue.isEmpty() == false);
	EXPECT_EQ(testingQueue.getSize(), 5);
	testingQueue.clear();

	ASSERT_TRUE(testingQueue.isEmpty() == true);
	EXPECT_EQ(testingQueue.getSize(), 0);

	testingQueue.enqueue(-500);
	testingQueue.enqueue(5051);
	testingQueue.enqueue(6021);
	testingQueue.enqueue(7501);
	testingQueue.enqueue(8321);

	ASSERT_TRUE(testingQueue.isEmpty() == false);
	EXPECT_EQ(testingQueue.getSize(), 5);

	EXPECT_EQ(testingQueue.dequeue(), -500);
	EXPECT_EQ(testingQueue.getSize(), 4);

	testingQueue.clear();

	ASSERT_TRUE(testingQueue.isEmpty() == true);
	EXPECT_EQ(testingQueue.getSize(), 0);
}