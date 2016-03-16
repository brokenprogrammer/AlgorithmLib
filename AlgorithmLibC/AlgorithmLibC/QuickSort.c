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
void swap (int values[], int val1, int val2);

/**
 * Quick Sort is one of the most used sorting algorithms out there. Many 
 * languages have it implemented in its standard libraries. This version is 
 * using Hoares partitioning scheme which means it starts the partitioning from
 * the middle of the array. and then using recursion sorts small pieces of 
 * the array at the time. Hoares partitioning starts from each ends of the
 * array and moves towards the middle.
 * Read for explanation: mycstutorials.com/articles/sorting/quicksort
 *
 * @param array - The array to sort.
 * @param size - The size of the array to sort.
 */
void QuickSort(int values[], int start, int size) {
    int i = start;
    int j = size - 1;
    //Decide what pivot element to use. We start from the first element.
    int pivot = values[start];
    
    if (start >= size)
        return;
    
    while (i < j) {
        /*
         * If the current value value counting from the right is greater than
         * the selected pivot then get the next element (continue searching) 
         * if the value is less than the pivot then stop.
         */
        while (i < j && values[j] >= pivot) {
            j--;
        }
        
        /*
         * If the current value value counting from the left is smaller than
         * the selected pivot then get the next element (continue searching)
         * if the value is greater than the pivot then stop.
         */
        while (i < j && values[i] <= pivot) {
            i++;
        }
        
        /* If the left seek index is less than the right index swap them */
        if (j > i) {
            swap(values, i, j);
        }
    }
    
    /* After i and j have crossed swap the last element in the left partition
    with the pivot. */
    swap(values, start, j);
    
    QuickSort(values, start, i);
    QuickSort(values, i + 1, size);
}

/*
 * Swap swaps two values in an array. Uses a temp variable then swaps the 
 * values inside the two specified slots.
 *
 * @param values - Target array.
 * @param val1 - Index of first value to swap.
 * @param val2 - Index of second value to swap.
 */
void swap (int values[], int val1, int val2) {
    int temp = values[val1];
    values[val1] = values[val2];
    values[val2] = temp;
}