#include "simplemath.h"
#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	Stack<int> myStack;
	
	//int myInt = myStack.getSize();
	//cout << "My stack size: " << myInt << endl;
	myStack.push(12);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);
	myStack.push(13);

	if (myStack.isEmpty()) 
	{
		cout << "Empty stack!" << endl;
		cout << "Stack contains: " << myStack.getSize() << " elements." << endl;
	}

	cout << "Top element: " << myStack.peek() << endl;

	cout << myStack.pop() << endl;
	cout << myStack.pop() << endl;
	cout << "Stack contains: " << myStack.getSize() << " elements." << endl;

	myStack.clear();
	cout << "Stack contains: " << myStack.getSize() << " elements." << endl;

	int tmp = 0;
	cin >> tmp;
	return 0;
}