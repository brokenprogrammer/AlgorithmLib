/*
* The alg.js Library.
* The JavaScript library to provide solutions for tasks like sorting,
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

/**
 * BubbleSort sorts an array by repeatedly looping through an array by stepping
 * through each value comparing the adjacent values and swaps the values if they
 * are in wrong order. This keeps looping through untill no swaps is made and then
 * the sorting is complete. Its called bubble sort because its bubbling the values
 * up the array.
 *
 * @param value - An array of integers to be sorted.
 * @return a sorted array. 
 */
function BubbleSort(value) {
    if (typeof value != 'object') {
        throw new TypeError('Value is not an array that can be sorted.');
    }
    var redo = true;
    var switchTemp;
    var size = value.length;

    for (var x = size; redo; x-- ) {
        redo = false;
        for (var y = 0; y <= x; y++) {
            if (value[y] > value[y+1]) {
                redo = true;
                switchTemp = value[y+1];
                value[y+1] = value[y];
                value[y] = switchTemp;
            }
        }
    }
    return value;
};

var sorting = [6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9];
console.log(BubbleSort(sorting));
