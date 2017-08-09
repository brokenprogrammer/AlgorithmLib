#ifndef Stack_H
#define Stack_H
#pragma once

template <typename T>
class Queue
{
public:
	Queue();
	Queue(cosnt Queue&) = default;
	~Queue();

	Queue& operator =(const Queue&) = default;


};

#endif

template<typename T>
inline Queue<T>::Queue()
{
}

template<typename T>
inline Queue<T>::~Queue()
{
}
