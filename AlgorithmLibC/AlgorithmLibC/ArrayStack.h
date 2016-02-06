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
#define STACK_MAX 30

#ifndef ArrayStack_h
#define ArrayStack_h

#include <stdio.h>

/**
 * struct ArrayStruct represents a Stack data structure
 * using an array. The empty list is represented by
 * an array with 30 elements. To create a new ArrayStack create a variable
 * of this type containing a pointer to NULL.
 */
struct ArrayStack;

/**
 * initializes new array based stack.
 *
 * @returns pointer to a newly allocated ArrayStack.
 */
struct ArrayStack* initArrayStruct();

/**
 * push a value to the array based stack.
 *
 * @param *stack - Pointer to the target stack to push to.
 * @param val - value to push into the stack.
 */
void pushToArrayStruct(struct ArrayStack *stack, int val);

/**
 * pushToArrayStructEnd pushes a value to the bottom of the stack.
 *
 * @param *stack - Pointer to the target stack to push to.
 * @param val - value to push into the stack.
 */
void pushToArrayStructEnd(struct ArrayStack *stack, int val);

/**
 * popFromArrayStruct pops the top value of the array based stack
 * and returns its value to the caller.
 *
 * @param *stack - Pointer to the target stack to pop from.
 * @returns value that was removed form the top of the stack.
 */
int popFromArrayStruct(struct ArrayStack *stack);

/**
 * peekAtArrayStrut returns the top value of the array based stack
 * without removing it from the stack.
 *
 * @param *stack - Pointer to the target stack to peek at.
 * @returns the value located at the top of the stack.
 */
int peekAtArrayStruct(struct ArrayStack *stack);

/**
 * isEmptyArrayStruct checks if the array based stack is empty or not
 * and returns a true of false value depending on if it is or not.
 *
 * @param *stack - Pointer to the target stack to check if empty.
 * @return a true or false value depending on if the target stack is empty
 * or not.
 */
int isEmptyArrayStruct(struct ArrayStack *stack);

/**
 * displayArrayStruct loops through the entire array based stack
 * printing out all the values within the stack.
 *
 * @param *stack - Pointer to the target stack to display values from.
 */
void displayArrayStruct(struct ArrayStack *stack);

#endif /* ArrayStack_h */
