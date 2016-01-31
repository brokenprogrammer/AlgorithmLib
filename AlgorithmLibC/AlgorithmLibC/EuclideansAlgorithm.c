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

#include "EuclideansAlgorithm.h"


/**
 * Euclideans Algorithm is a way to find the greatest commong divisor.
 * The implementation here is a recursive function that takes two values
 * It checkas if the second value is 0 because thats the slot for the remainder
 * when the function does a recursive call.
 * The function then goes on getting the remainder of value1 / value2 and 
 * recursivley loops untill it finds the greatest common divisor.
 *
 * @param value1 - The first value to be compared with.
 * @param value2 - The second value to be compared with, will also hold the 
 * remainder in future loops.
 * @returns the greatest common divisor of value1 & value2.
 */
int EuclideansAlgorithm(int value1, int value2) {
    if (value2 == 0) {
        return value1;
    }
    int remainder = value1 % value2;
    
    return EuclideansAlgorithm(value2, remainder);
}