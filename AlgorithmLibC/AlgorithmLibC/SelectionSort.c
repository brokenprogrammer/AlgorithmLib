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

#include "SelectionSort.h"

/**
 * Selection Sort is one of the simplest sorting algorithms out there. It is 
 * oftean used to teach new students or used as an introduction to sorting 
 * algorithms. What it does is to loop through they array finding the smallest
 * value of the array and place that value on the current position by swapping
 * the value of the current loop by the smallest value found.
 * Selection sort is very simple but does have performance advantages over more
 * complicated algorithms in some situations.
 *
 * @param array - The array to sort.
 * @param size - The size of the array to sort.
 */
void SelectionSort(int array[], int size) {
    
    for(int x = 0; x < size; x++) {
        
        int min = array[x];
        int foundAt = x;
        int temp = 0;
        
        for(int y = x+1; y < size; y++) {
            if(min > array[y]) {
                min = array[y];
                foundAt = y;
            }
        }
        if (min != array[x]) {
            temp = array[x];
            array[x] = min;
            array[foundAt] = temp;
        }
    }
    //for (int x = 0; x < size; ++x) {
    //    printf("%i, ", array[x]);
    //}
}