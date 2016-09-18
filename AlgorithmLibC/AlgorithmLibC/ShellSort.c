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

#include "ShellSort.h"

/**
 * Shell Sort is an extension of Insertion sort which allows comparison to
 * elements which are far apart. How it works is that a gap is decided and it
 * starts comparing all the elements that are gap number of elements apart from
 * eachother. Beginning with a high gap number allows for numbers to be moved 
 * long distances. In this implementation the gap is decided just by dividing 
 * the size by 2 then dividing the decided gap by 2 each loop, there is other
 * ways to implement how the gap is decided but i will keep this for simplicity.
 *
 * @param array - The array to sort.
 * @param n - The size of the array to sort.
 */
void ShellSort(int values[], int n) {
    int h = 1; // Starting gap
    
    //Set the starting gap for the sort to be half the size of the array
    h = n / 2;
    while (h > 0) {
        //Set the loop to start looking from the gap position in the array so
        //it can compare to the elements that is gap number of positions behind
        //the current element.
        for (int i = h; i < n; i++) {
            for (int j = i; j >= h && values[j] < values[j-h]; j-=h) {
                //Swap the values with the j and the j - gap if j is higher than
                // j-gap which is a lower index.
                int t = values[j];
                values[j] = values[j-h];
                values[j-h] = t;
            }
        }
        h /= 2;
    }
}