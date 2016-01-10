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
        Mathematics.EuclideansAlgorithm = function (p, q) {
            if (q == 0) {
                return p;
            }
            var remainder = p % q;
            return Mathematics.EuclideansAlgorithm(q, remainder);
        }
        return Mathematics;
    }());
    algJS.Mathematics = Mathematics;
    var Search = (function () {
        function Search () {
        }
        Search.BinarySearch = function (key, array) {
            var lo = array[0];
            var mid = array[array.length/2];
            var hi = array[array.length-1];

            if (mid == key) {
                return mid;
            } else if (array.length == 1) {
                return 'Value not found!';
            }

            if (key < mid) {
                return Search.BinarySearch(key, array.slice(0, array.length/2));
            } else if (key > mid) {
                return Search.BinarySearch(key, array.slice(array.length/2, array.length));
            }
        }
        return Search;
    }());
    algJS.Search = Search;
    var Sort = (function () {
        function Sort() {
        }
        Sort.BubbleSort = function (value) {
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
        Sort.QuickSortLomuto = function (value) {
            return value;
        }
        return Sort;
    }());
    algJS.Sort = Sort;
})(algJS || (algJS = {}));
