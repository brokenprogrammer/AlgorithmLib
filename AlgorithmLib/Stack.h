#ifndef Stack_H
#define Stack_H
#pragma once

template <typename T>
class Stack
{
public:
	Stack();
	Stack(const Stack&) = default;
	~Stack();

	Stack& operator =(const Stack &) = default;

	void	 push(T const& data);
	void     push(T&& data);

	T        pop();

	bool     isEmpty() const;
	size_t   getSize() const;
	T&       peek()    const;
	void	 clear();

	struct Node {
		T data;
		Node *next;
	};

private:
	Node*  root;
	size_t elements;
};

template<typename T>
Stack<T>::Stack()
{
	root = nullptr;
	elements = 0;
}

template<typename T>
Stack<T>::~Stack()
{
	clear();
}

template<typename T>
void Stack<T>::push(T const & data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = root;
	root = newNode;
	++elements;
}

template<typename T>
void Stack<T>::push(T && data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = root;
	root = newNode;
	++elements;
}

template<typename T>
T Stack<T>::pop()
{
	if (isEmpty())
		throw std::runtime_error{ "Stack<T>::pop(): Empty stack" };

	T value = root->data;

	Node* temp = root->next;
	delete root;
	root = temp;
	--elements;

	return value;
}

template<typename T>
bool Stack<T>::isEmpty() const
{
	return elements == 0;
}

template<typename T>
size_t Stack<T>::getSize() const
{
	return elements;
}

template<typename T>
T & Stack<T>::peek() const
{
	if (isEmpty())
		throw std::runtime_error{ "Stack<T>::pop(): Empty stack" };

	return root->data;
}

template<typename T>
void Stack<T>::clear()
{
	if (!isEmpty()) 
	{
		Node* nextNode = nullptr;
		while (root != nullptr)
		{
			nextNode = root->next;
			delete root;
			root = nextNode;
			--elements;
		}

		root = nullptr;
	}
}

#endif