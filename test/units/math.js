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

QUnit.test('Math', function (assert) {
    assert.equal(1, 1, 'Library working.');

    assert.equal(algJS.Mathematics.Add(5, 5), 10, '5 + 5 = ' + algJS.Mathematics.Add(5, 5));
    assert.equal(algJS.Mathematics.Sub(10, 5), 5, '10 - 5 = ' + algJS.Mathematics.Sub(10, 5));
    assert.equal(algJS.Mathematics.Divide(10, 2), 5, '10 / 2 = ' + algJS.Mathematics.Divide(10, 2));
    assert.equal(algJS.Mathematics.Multiply(10, 10), 100, '10 * 10 = ' + algJS.Mathematics.Multiply(10, 10));
    assert.equal(algJS.Mathematics.Factorial(10), 3628800, '10! = ' + algJS.Mathematics.Factorial(10));

    assert.throws(function() {
    	algJS.Mathematics.Add("5", "5")
    }, new TypeError('Invalid type in parameters, Expected Number, Number.'), 'TypeError: Mathematics.Add Expects two numbers.');

    assert.throws(function() {
    	algJS.Mathematics.Sub(undefined, null)
    }, new TypeError('Invalid type in parameters, Expected Number, Number.'), 'TypeError: Mathematics.Sub Expects two numbers.');

    assert.throws(function() {
    	algJS.Mathematics.Divide(null, NaN)
    }, new TypeError('Invalid type in parameters, Expected Number, Number.'), 'TypeError: Mathematics.Divide Expects two numbers.');

    assert.throws(function() {
    	algJS.Mathematics.Multiply(undefined, undefined)
    }, new TypeError('Invalid type in parameters, Expected Number, Number.'), 'TypeError: Mathematics.Multiply Expects two numbers.');

    assert.throws(function() {
    	algJS.Mathematics.Factorial(undefined)
    }, new TypeError('Invalid type in parameters, Expected Number.'), 'TypeError: Mathematics.Factorial Expects a numbers.');
});
