/**
 * AlgorithmLib.
 * The library to provide solutions for tasks like sorting,
 * searching and math algorithms.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 The alg.js Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "QuickSort.h"

/**
 * Quick Sort is one of the most used sorting algorithms out there. Many 
 * languages have it implemented in its standard libraries. This version is 
 * using Hoares partitioning scheme which means it starts the partitioning from
 * the middle of the array. and then using recursion sorts small pieces of 
 * the array at the time.
 *
 * @param array - The array to sort.
 * @param size - The size of the array to sort.
 */
void QuickSort(int values[], int start, int size) {
    
    int switchTemp;
    int i, last;
    
    if (start >= size)
        return;
    
    last = start;
    
    for (i = start+1; i <= size; i++) {
        if (values[i] < values[start]) {
            switchTemp = values[start];
            values[start] = values[i];
            values[i] = switchTemp;
        }
    }
    QuickSort(values, start, size-1);
    QuickSort(values, start+1, size);
}