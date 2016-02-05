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
 * initialize a new linked list Stack by allocating the memory
 * required and returning a pointer to the allocated Stack.
 *
 * @param val - The value to store in the first position of the stack.
 * @returns a pointer to an allocated linked list based Stack.
 */
Stack* initStackWithData(int val);

/**
 * pushes a new value into the Stack
 *
 * @param **head - Pointer to the head pointer. Lets us manipulate the
 * head variable within this function.
 * @param val - Value to insert into the Stack.
 */
void push(Stack **head, int val);

/**
 * pop removes the top value from the stack and reuturns it
 * to the caller.
 *
 * @param **head - Pointer to the head pointer. Lets us manipulate the
 * head variable within this function.
 * @returns the top value of the Stack. Returns -1 if the stack is empty.
 */
int pop(Stack **head);

/**
 * peek returns the top value of the Stack without removing it from the
 * Stack.
 *
 * @param **head - Pointer to the head pointer. Lets us manipulate the
 * head variable within this function.
 * @returns the top value of the stack. Returns -1 if the stack is empty.
 */
int peek(Stack **head);

/**
 * deleteStack removes the entire linked list of Stacks by freeing
 * their memory.
 *
 * @param **head - Pointer to the head pointer. Lets us manipulate the
 * head variable within this function.
 */
void deleteStack(Stack **head);

/**
 * isEmpty is a function to check if target stack is empty or not.
 *
 * @param *head - Pointer to the stack to look at.
 */
int isEmpty(Stack *head);

/**
 * display prints out all values in the linked list of stacks.
 *
 * @param *head - Point to the stack to display.
 */
void display(Stack *head);

#endif /* Stack_h */