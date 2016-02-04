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

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

/**
 * struct Stack Stack represents a Stack data structure
 * using a linked list. The empty list is represented by
 * a NULL pointer. To create a new Stack create a variable
 * of this type containing a pointer to NULL.
 */
typedef struct Stack Stack;

/**
 * struct ArrayStruct represents a Stack data structure
 * using an array. The empty list is represented by
 * an array with 30 elements. To create a new ArrayStack create a variable
 * of this type containing a pointer to NULL.
 */
struct ArrayStruct;

/**
 * initialize a new linked list Stack by allocating the memory
 * required and returning a pointer to the allocated Stack.
 *
 * @param val - The value to store in the first position of the stack.
 * @returns a pointer to an allocated linked list based Stack.
 */
Stack* initWithData(int val);

void push(Stack **head, int val);
int pop(Stack **head);
int peek(Stack **head);
void deleteStack(Stack **head);

int isEmpty(Stack *head);
void display(Stack *head);

struct ArrayStruct* initArrayStruct();
void pushToArrayStruct(struct ArrayStruct *stack, int val);
void pushToArrayStructEnd(struct ArrayStruct *stack, int val);
int popFromArrayStruct(struct ArrayStruct *stack);
int peekAtArrayStruct(struct ArrayStruct *stack);

void isEmptyArrayStruct(struct ArrayStruct *stack);
void displayArrayStruct(struct ArrayStruct *stack);
#endif /* Stack_h */