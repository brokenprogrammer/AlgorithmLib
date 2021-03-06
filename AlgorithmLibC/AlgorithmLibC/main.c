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

#include <stdio.h>
#include "BubbleSort.h"
#include "EuclideansAlgorithm.h"
#include "StirlingsApproximation.h"
#include "LinearSearch.h"
#include "BinarySearch.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "ShellSort.h"
#include "ArrayStack.h"
#include "Queue.h"
#include "CaesarCipher.h"
#include "Stack.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int sum;
    
    sum = 50 + 25;
    
    printf("Programming is fun!\n");
    printf("And programming in C is even more fun!\n");
    
    printf("The sum of 50 and 25 is: %i\n", sum);
    
    int values[] = {6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9};
    int valuesSize = sizeof (values) / sizeof (int);
    printf("Values Length: %lu \n", sizeof (values) / sizeof (int));
    
    BubbleSort(values, valuesSize);
    BubbleSortHiLo(values, valuesSize);
    
    printf("Euclieands of: 252 & 105: %i\n", EuclideansAlgorithm(252, 105));
    
    printf("Stirlings Approximitation of !1: %f\n", StirlingsApproximation(1));
    printf("Stirlings Approximitation of !1: %f\n", StirlingsApproximation(5));
    
    
    BubbleSort(values, valuesSize);
    for (int x = 0; x < valuesSize; ++x) {
        printf("%i, ", values[x]);
    }
    
    printf("\nUsing BinarySearch the position of value 99 is: %i\n", BinarySearchHiLo(99, values, 0, valuesSize));
    printf("Using BinarySearch the position of value 64 is: %i\n", BinarySearch(64, values, valuesSize));
    
    int selValues[] = {6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9};
    SelectionSort(selValues, valuesSize);
    for (int x = 0; x < valuesSize; ++x) {
        printf("%i, ", selValues[x]);
    }
    
    struct ArrayStack *root = initArrayStruct();
    
    pushToArrayStruct(root, 5);
    pushToArrayStruct(root, 10);
    pushToArrayStruct(root, 15);
    
    displayArrayStruct(root);
    
    printf("Value removed from stack: %i\n", popFromArrayStruct(root));
    printf("Value removed from stack: %i\n", popFromArrayStruct(root));
    printf("Value removed from stack: %i\n", popFromArrayStruct(root));
    printf("Value removed from stack: %i\n", popFromArrayStruct(root));
    
    displayArrayStruct(root);
    
    pushToArrayStruct(root, 15);
    
    printf("Value at the top of the stack: %i\n", peekAtArrayStruct(root));
    
    pushToArrayStruct(root, 643);
    
    printf("Value at the top of the stack: %i\n", peekAtArrayStruct(root));
    
    pushToArrayStruct(root, 55);
    pushToArrayStructEnd(root, 10);
    displayArrayStruct(root);
    
    
    printf("Testing Queue\n");
    
    Queue *myQueue = initQueueWithData(5);
    enqueue(&myQueue, 10);
    
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 150);
    enqueue(&myQueue, 106);
    enqueue(&myQueue, 13450);
    enqueue(&myQueue, 140);
    enqueue(&myQueue, 156430);
    
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Current top value: %i\n", peekQueue(myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    printf("Enqueud value: %i\n", dequeue(&myQueue));
    
    Stack *myStack = 0;
    push(&myStack, 5);
    printf("TOP OF THE STACK: %i\n", peek(&myStack));
    display(myStack);
    
    char myString[] = "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
    char myLowerString[] = "the quick brown fox jumps over the lazy dog";
    printf("Unencrypted: %s\n", myString);
    printf("Encrypted: %s\n", caesarEncrypt(myString, 43));
    printf("Decrypted: %s\n", caesarDecrypt(myString, 43, 3));
    printf("Unencrypted: %s\n", myLowerString);
    printf("Encrypted: %s\n", caesarEncrypt(myLowerString, 43));
    printf("Decrypted: %s\n", caesarDecrypt(myLowerString, 43, 3));
    
    
    //int sellValues[] = {6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9};
    //QuickSort(sellValues, 0, valuesSize);
    //for (int x = 0; x < valuesSize; ++x) {
    //    printf("%i, ", sellValues[x]);
    //}
    
    printf("\nShell Sort: \n");
    int selllValues[] = {6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9};
    ShellSort(selllValues, valuesSize);
    for (int x = 0; x < valuesSize; ++x) {
        printf("%i, ", selllValues[x]);
    }
    
    printf("\nInsertion Sort: \n");
    int sellllValues[] = {6, 4, 1, 2, 3, 5, 7, 10, 99, 64, 32, 22, 103, 74, 8, 9};
    InsertionSort(sellllValues, valuesSize);
    for (int x = 0; x < valuesSize; ++x) {
        printf("%i, ", sellllValues[x]);
    }
    
    LinearSearch(103, sellllValues, valuesSize);
    
    printf("\n");
    return 0;
}