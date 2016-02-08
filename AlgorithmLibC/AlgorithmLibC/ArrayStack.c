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

#include "ArrayStack.h"
#include "stdlib.h"

//Array based stack data structure.
struct ArrayStack {
    int top;
    int data[STACK_MAX];
};

/**
 * initWithData initializes a new ArrayStruct by allocating a new pointer with
 * the ammount of memory a Stack needs. Then after checking if the newly
 * created stack is NULL or not its values are initialized by using the value
 * from the parameters and setting the next Stack it points to to NULL.
 *
 * @returns pointer to the just initialized ArrayStruct.
 */
struct ArrayStack* initArrayStruct() {
    struct ArrayStack *newStack = malloc(sizeof(*newStack));
    
    if(newStack == NULL) {
        return NULL;
    }
    
    newStack->top = -1;
    return newStack;
}

/**
 * pushToArrayStruct pushes a new integer value to the ArrayStruct provided in
 * the parameters. It first checks that the stack is not overflowing the array
 * size and if not proceeding with incrementing the top property and placing
 * a new value into the data property at the current top.
 *
 * @param *stack - The target stack to push a value to.
 * @param val - The target value to push into the array of the stack.
 */
void pushToArrayStruct(struct ArrayStack *stack, int val) {
    if (stack->top >= STACK_MAX-1) {
        return;
    }
    stack->top = stack->top + 1;
    stack->data[stack->top] = val;
}

/**
 * pushToArrayStructEnd pushes a new integer value to the ArrayStruct provided
 * in the parameters. It first checks that the stack is not overflowing
 * the array size and if not proceeding with looping through the stacks entire
 * data array moving each element up one position in the stack and then places
 * the new value at the bottom of the stack at position 0.
 *
 * @param *stack - The target stack to push a value to.
 * @param val - The target value to push into the array of the stack.
 */
void pushToArrayStructEnd(struct ArrayStack *stack, int val) {
    if (stack->top >= STACK_MAX-1) {
        return;
    }
    
    int x;
    for (x = stack->top; x >= 0; x--) {
        stack->data[x+1] = stack->data[x];
    }
    stack->top = stack->top + 1;
    stack->data[0] = val;
}

/**
 * popFromArrayStruct removes the value at the top position of the stacks array
 * and reuturns it.
 *
 * @param *stack - The target stack to pop the top values from.
 *
 * @returns the value on the top of the stack. Returns -1 if the stack is empty.
 */
int popFromArrayStruct(struct ArrayStack *stack) {
    if (stack->top < 0) {
        return -1;
    }
    return stack->data[stack->top--];
}

/**
 * peekAtArrayStrut returns the top value of the array based stack
 * without removing it from the stack.
 *
 * @param *stack - Pointer to the target stack to peek at.
 * @returns the value located at the top of the stack.
 */
int peekAtArrayStruct(struct ArrayStack *stack) {
    return stack->data[stack->top];
}

/**
 * isEmptyArrayStruct checks if the array based stack is empty or not
 * and returns a true of false value depending on if it is or not.
 *
 * @param *stack - Pointer to the target stack to check if empty.
 * @return a true or false value depending on if the target stack is empty
 * or not.
 */
int isEmptyArrayStruct(struct ArrayStack *stack) {
    return stack->top >= 1;
}

/**
 * displayArrayStruct loops through the entire array based stack
 * printing out all the values within the stack.
 *
 * @param *stack - Pointer to the target stack to display values from.
 */
void displayArrayStruct(struct ArrayStack *stack) {
    for (int x = 0; x <= stack->top; x++) {
        printf("Stack Data: %i\n", stack->data[x]);
    }
}