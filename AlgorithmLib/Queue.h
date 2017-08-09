#ifndef Stack_H
#define Stack_H
#pragma once

template <typename T>
class Queue
{
public:
	Queue();
	Queue(const Queue&) = default;
	~Queue();

	Queue& operator =(const Queue&) = default;

	void   enqueue(T const& data);
	void   enqueue(T&& data);

	T      dequeue();

	T&	   peek() const;

	bool   isEmpty() const;
	size_t getSize() const;
	void   clear();

	struct Node {
		T data;
		Node *next;
	};

private:
	Node *head;
	Node *tail;
	size_t elements;
};

template<typename T>
inline Queue<T>::Queue()
{
	head = nullptr;
	tail = nullptr;
	elements = 0;
}

template<typename T>
inline Queue<T>::~Queue()
{
	clear();
}

template<typename T>
inline void Queue<T>::enqueue(T const & data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;

	if (isEmpty())
	{
		head = newNode;
	}
	else
	{
		tail->next = newNode;
	}

	tail = newNode;
	++elements;
}

template<typename T>
inline void Queue<T>::enqueue(T && data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;

	if (isEmpty()) 
	{
		head = newNode;
	}
	else
	{
		tail->next = newNode;
	}

	tail = newNode;
	++elements;
}

template<typename T>
inline T Queue<T>::dequeue()
{
	if (isEmpty())
		throw std::runtime_error{ "Queue<T>::dequeue(): Empty queue" };

	T value = head->data;

	Node* temp = head->next;
	delete head;
	head = temp;
	--elements;

	return value;
}

template<typename T>
inline T & Queue<T>::peek() const
{
	if (isEmpty())
		throw std::runtime_error{ "Queue<T>::peek(): Empty queue" };

	return head->data;
}

template<typename T>
inline bool Queue<T>::isEmpty() const
{
	return elements == 0;
}

template<typename T>
inline size_t Queue<T>::getSize() const
{
	return elements;
}

template<typename T>
inline void Queue<T>::clear()
{
	if (!isEmpty())
	{
		Node* nextNode = nullptr;
		while (head != nullptr)
		{
			nextNode = head->next;
			delete head;
			head = nextNode;
			--elements;
		}

		head = nullptr;
		tail = nullptr;
	}
}

#endif