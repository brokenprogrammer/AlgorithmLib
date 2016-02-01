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

#include "BinarySearch.h"

/**
 * BinarySearch is an algorithm that searches for a specified value inside a
 * specified array. The returned value is the position in the array of where the
 * specified value is located at.
 *
 * @param key - The key value to look for in the array.
 * @param array - The array to look for the value inside.
 * @param size - The max size of the array.
 *
 * @return returns the position of the key value or zero if the search failed.
 */
int BinarySearch(int key, int array[], int size) {
    int min = 0;
    int max = size;
    int mid = 0;
    
    while (min <= max) {
        mid = min + (max - min) / 2;
        
        if (key < array[mid]) {
            max = mid - 1;
        } else if (key > array[mid]) {
            min = mid + 1;
        } else {
            return mid;
        }
    }
    
    return mid;
}

/**
 * BinarySearchHiLo is searching with BinarySearch using an recursive function.
 * This function needs to take the high and low through the parameters for it to work
 * recursive. The function starts looking if the array is too short comparing max and min.
 * Then the function moves on creating a mid variable just like the normal BinarySearch.
 * What happends after is that we use the mid value to check if the key value is on the left
 * or the right side of the mid value. That way we can return a call to the same function
 * always checking the new mid value.
 *
 * @param key - The key value to look for in the array.
 * @param array - The array to look for the value inside.
 * @param min - The minimum index for the search.
 * @param max - The maximum index for the search.
 *
 * @return returns the position of the key value or zero if the search failed.
 */
int BinarySearchHiLo(int key, int array[], int min, int max) {
    if (max < min) {
        return 0;
    }
    
    int mid = min + (max - min) / 2;
    
    if (key < array[mid]) {
        return BinarySearchHiLo(key, array, min, mid-1);
    } else if (key > array[mid]) {
        return BinarySearchHiLo(key, array, mid+1, max);
    } else {
        return mid;
    }
    return 0;
}