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
QUnit.test( 'BubbleSort', function( assert ) {
    var sorted = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 32, 64, 74, 99, 103];
    var sorting = [6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9];
    assert.equal(algJS.Sort.BubbleSort('Sort'), 'Sort', 'Function is working!');

    var finishedSort = algJS.Sort.BubbleSort(sorting);
    var success = true;
    for (var x = 0; x <= finishedSort.length; x++) {
        if (sorted[x] == finishedSort[x]){

        } else if (finishedSort[x] != sorted[x]) {
            success = false;
        }
    }
    assert.equal(success, true, 'Sorted the array successfully!');

    console.time('Sort Normal');
    for (var x = 0; x <= 10000; x++) {
        algJS.Sort.BubbleSort(sorting);
        if (x == 10000) {
            assert.equal(x, 10000, 'Sorted 10.000 times.');
        }
    }
    console.timeEnd('Sort Normal');
    console.log(algJS.Sort.BubbleSort(sorting));
});
