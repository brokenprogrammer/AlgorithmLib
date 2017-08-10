#ifndef BubbleSort_H
#define BubbleSort_H
#pragma once

#include <vector>

template <typename T>
void sort(std::vector<T> &data)
{
	int len = data.size();
	bool swapped = true;

	for (int i = 0; swapped; ++i)
	{
		swapped = false;
		for (int j = 0; j < len - (i+1); ++j)
		{
			if (data.at(j) > data.at(j+1))
			{
				std::swap(data.at(j), data.at(j+1));
				swapped = true;
			}
		}
	}
}

#endif
