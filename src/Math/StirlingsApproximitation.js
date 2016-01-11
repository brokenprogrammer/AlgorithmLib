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
 * Stirlings Approximitation is used as a solution to approximitate large factorial
 * numbers. Even with programming code a big factorial number can take time to calculate,
 * using Stirlings Approximitation formula we can approximate the factorial value.
 * n! is that same as stirlings returned n! just that stirlings is an approximate.
 *
 * @param n - The number we should approximate the factorial for.
 *
 * @return Approximate factorial value of n.
 */
function StirlingsApproximation (n) {
    return Math.sqrt((2 * Math.PI) * n) * Math.pow((n / Math.E), n);
}

/*
    Stirlings Approximitation of the first five factorial numbers:
    1! = 0.92
    2! = 1.92
    3! = 5.84
    4! = 23.51
    5! = 118.02
*/
console.log(StirlingsApproximation(1));
console.log(StirlingsApproximation(2));
console.log(StirlingsApproximation(3));
console.log(StirlingsApproximation(4));
console.log(StirlingsApproximation(5));
