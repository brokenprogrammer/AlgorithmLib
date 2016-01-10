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

function BinarySearch(key, array) {
    var lo = array[0];
    var mid = array[array.length/2];
    var hi = array[array.length-1];

    if (mid == key) {
        return mid;
    } else if (array.length == 1) {
        return "Value not found!";
    }

    if (key < mid) {
        return BinarySearch(key, array.slice(0, array.length/2));
    } else if (key > mid) {
        return BinarySearch(key, array.slice(array.length/2, array.length));
    }
}

var sorted = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 32, 64, 74, 99, 103];
console.log(BinarySearch(5, sorted));
console.log(BinarySearch(99, sorted));
console.log(BinarySearch(32, sorted));

//Searching for value not existing.
console.log(BinarySearch(11, sorted));
console.log(BinarySearch(55, sorted));
console.log(BinarySearch(1000, sorted));
