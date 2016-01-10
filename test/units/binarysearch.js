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

QUnit.test('BinarySearch', function (assert) {
    assert.equal(1, 1, 'Library working.');

    var sorted = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 22, 32, 64, 74, 99, 103];

    assert.equal(algJS.Search.BinarySearch(5, sorted), 4, 'Found the value 5 at position 4.');
    assert.equal(algJS.Search.BinarySearch(99, sorted), 14, 'Found the value 99 at position 14.');
    assert.equal(algJS.Search.BinarySearch(32, sorted), 11, 'Found the value 32 at position 11.');

    assert.equal(algJS.Search.BinarySearch(11, sorted), 'Failed to find value.', 'Didnt find value 11.');
    assert.equal(algJS.Search.BinarySearch(55, sorted), 'Failed to find value.', 'Didnt find value 55.');
    assert.equal(algJS.Search.BinarySearch(1000, sorted), 'Failed to find value.', 'Didnt find value 1000.');
});
