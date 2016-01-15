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
"use strict";

var algJS;
(function (algJS) {
    var Test = (function () {
        function Test () {
        }
        Test.printVal = function(value) {
            return value;
        }
        return Test;
    }());
    algJS.Test = Test;
    var Mathematics = (function () {
        function Mathematics () {
        }
        Mathematics.Add = function(a, b) {
            if (typeof a != 'number' || typeof b != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            return a + b;
        }
        Mathematics.Sub = function(a, b) {
            if (typeof a != 'number' || typeof b != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            return a - b;
        }
        Mathematics.Divide = function(a, b) {
            if (typeof a != 'number' || typeof b != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            return a / b;
        }
        Mathematics.Multiply = function(a, b) {
            if (typeof a != 'number' || typeof b != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            return a * b;
        }
        Mathematics.Factorial = function(n) {
            if (typeof n != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number.');
            }
            if (n == 0) {
                return 1;
            }
            return n * Mathematics.Factorial(n-1);
        }
        Mathematics.LogarithmicFactorial = function(n, val) {
            if (typeof n != 'number' || typeof val != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            if(n == 0) {
                return val;
            }

            return Mathematics.LogarithmicFactorial(n-1, val + Math.log(n));
        }
        Mathematics.EuclideansAlgorithm = function(p, q) {
            if (typeof p != 'number' || typeof q != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            if (q == 0) {
                return p;
            }
            var remainder = p % q;
            return Mathematics.EuclideansAlgorithm(q, remainder);
        }
        Mathematics.StirlingsApproximation = function(n) {
            if (typeof n != 'number') {
                throw new TypeError('Invalid type in parameters, Expected Number, Number.');
            }
            return Math.sqrt((2 * Math.PI) * n) * Math.pow((n / Math.E), n);
        }
        return Mathematics;
    }());
    algJS.Mathematics = Mathematics;
    var Search = (function() {
        function Search() {
        }
        Search.BinarySearch = function(key, array) {
            if (typeof key != 'number' || typeof array != 'object') {
                throw new TypeError('Invalid type in parameters, Expected Number, Array.');
            }
            var lo = 0;
            var hi = array.length-1;
            var mid;

            while (lo <= hi) {
                mid = lo + (hi - lo) / 2;
                mid = Math.floor(mid);
                if (key < array[mid]) {
                    hi = mid - 1;
                } else if (key > array[mid]) {
                    lo = mid + 1;
                } else {
                    return mid;
                }
            }

            return 'Failed to find value.';
        }
        return Search;
    }());
    algJS.Search = Search;
    var Sort = (function() {
        function Sort() {
        }
        Sort.BubbleSort = function(value) {
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
        }
        Sort.QuickSortLomuto = function(value) {
            var last = value[value.length-1];
            var lastIndex = value.length-1;
            var currentLow = 1;
            var lowMeet;
            var right = true;

            while (right) {
                right = false;

                if (value[lastIndex] > value[lastIndex-1] && value[lastIndex-1] != lowMeet) {
                    var tmp = value[currentLow];
                    value[currentLow] = value[lastIndex-1];
                    value[lastIndex-1] = tmp;

                    if (currentLow == 2) {
                        lowMeet = value[currentLow];
                    }

                    currentLow += 1;
                    right = true;
                }

                if (value[lastIndex] <= value[lastIndex-1]) {
                    value[lastIndex] = value[lastIndex-1];
                    value[lastIndex-1] = last;
                    lastIndex -= 1;
                    right = true;
                    console.log(value); 
                }
            }

            return value;
        }
        return Sort;
    }());
    algJS.Sort = Sort;
})(algJS || (algJS = {}));

var sorting = [3, 7, 8, 5, 2, 1, 9, 5, 4];
console.log(algJS.Sort.QuickSortLomuto(sorting));