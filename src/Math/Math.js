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
 * Add is a function that uses addition to return the sum of two numbers.
 *
 * @param a - first number to use in the addition.
 * @param b - second number to use in the addition.
 *
 * @return The sum of a and b.
 */
function Add(a, b) {
    return a + b;
}

/**
 * Sub is a function that uses subtraction to return the sum of two numbers.
 *
 * @param a - first number to use in the subtraction.
 * @param b - second number to use in the subtraction.
 *
 * @return The difference of a and b.
 */
function Sub(a, b) {
    return a - b;
}

/**
 * Divide is a function that uses division to return the quotient of two numbers.
 *
 * @param a - first number to use in the division.
 * @param b - second number to use in the division.
 *
 * @return The quotient of a and b.
 */
function Divide(a, b) {
    return a / b;
}

/**
 * Multiply is a function that uses multiplication to return the product of two numbers.
 *
 * @param a - first number to use in the multiplication.
 * @param b - second number to use in the multiplication.
 *
 * @return The product of a and b.
 */
function Multiply(a, b) {
    return a * b;
}

/**
 * Factorial is a function that returns the factorial of given number in the
 * parameters. Factorial is the product of all integers from 1 to n.
 * Example: n! = 1 * 2 * 3 * ... * n
 *
 * @param n - The integer we want to get the factorial number of.
 *
 * @return The factorial of n.
 */
function Factorial(n) {
    var sum = 1;

    for (var i = 1; i <= n; i++) {
        sum *= i;
    }

    return sum;
}

/**
 * FactorialRecursive is a function that returns the factorial of given number
 * in the parameters. Factorial is the product of all integers from 1 to n.
 * Example: n! = 1 * 2 * 3 * ... * n
 * This is a more compact version of the Factorial function using a recursive solution.
 *
 * @param n - The integer we want to get the factorial number of.
 *
 * @return The factorial of n.
 */
function FactorialRecursive(n) {
    if (n == 0) {
        return 1;
    }
    return n * FactorialRecursive(n-1);
}

console.log('5 + 5 = ' + Add(5, 5));
console.log('8 - 3 = ' + Sub(8, 3));
console.log('10 / 2 = ' + Divide(10, 2));
console.log('10 * 10 = ' + Multiply(10, 10));
console.log('5! = ' + Factorial(5));
console.log('5! = ' + FactorialRecursive(5));
