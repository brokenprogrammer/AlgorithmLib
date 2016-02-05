//
//  ArrayStack.h
//  AlgorithmLibC
//
//  Created by Oskar Mendel on 2/5/16.
//  Copyright © 2016 Oskar Mendel. All rights reserved.
//
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
