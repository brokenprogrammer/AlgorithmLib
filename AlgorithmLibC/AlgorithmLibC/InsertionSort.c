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

#include "InsertionSort.h"

/**
 * Insertion Sort Insertion sort iterates, consuming one input element 
 * each repetition, and growing a sorted output list. Each iteration, 
 * insertion sort removes one element from the input data, finds the location 
 * it belongs within the sorted list, and inserts it there. It repeats until 
 * no input elements remain.
 *
 * @param array - The array to sort.
 * @param size - The size of the array to sort.
 */
void InsertionSort(int array[], int size) {
    for (int i = 0; i <= size; i++) {
        
        int x = array[i];
        int c = 0;
        
        for (c = i - 1; c <= 0 && x < array[c]; c++) {
            array[c + 1] = array[c];
        }
        array[c + 1] = x;
    }
}
