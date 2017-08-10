#ifndef LinearSearch_H
#define LinearSearch_H
#pragma once

#include <vector>

template <typename T>
bool search(std::vector<T> &data, T target)
{
	for (T i : data)
	{
		if (i == target)
			return true;
	}

	return false;
}

template <typename T>
int find(std::vector<T> &data, T target)
{
	int i = 0;
	for (std::vector<T>::iterator it = data.begin(); it != data.end(); ++it) 
	{
		if (*it == target)
		{
			return i;
		}
		++i;
	}

	return -1;
}

#endif