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

#ifndef Queue_h
#define Queue_h

#include <stdio.h>

/**
 * struct Queue represents a Queue data structure
 * using a linked list. The empty list is represented by
 * a NULL pointer. To create a new Queue create a variable
 * of this type containing a pointer to NULL.
 */
typedef struct Queue Queue;

/**
 * Initialiser for the Queue data structure that is based on a linked list.
 * 
 * @param val - Value to place in the first & last Node of the Queue.
 *
 * @returns pointer to the just initialized Queue structure(object).
 */
Queue* initQueueWithData(int val);

/**
 * Enqueue adds a new value in the end of the Queue
 *
 * @param **queue - Pointer to the Pointer to queue, the target queue to look
 * at. Lets us manipulate the Queue inside this function.
 */
void enqueue(Queue **queue, int val);

/**
 * Dequeue removes the value in the front of the Queue and returns it.
 *
 * @param **queue - Pointer to the Pointer to queue, the target queue to look
 * at. Lets us manipulate the Queue inside this function.
 *
 * @returns the value stored in the front of the Queue. Returns -1 if there is
 * nothing in the front of the Queue.
 */
int dequeue(Queue **queue);

/**
 * peekQueue returns the value in the front of the Queue without removing it.
 *
 * @param *queue - Pointer to queue, the target queue to look at.
 *
 * @returns The data value found in the front of the Queue. Returns -1 if the
 * Queue is empty.
 */
int peekQueue(Queue *queue);

/**
 * isEmptyQueue checks if the target Queue is empty or not.
 *
 * @param *queue - The Queue to check if empty or not.
 *
 * @returns 1 if the Queue is empty. Returns 0 if the Queue is not empty.
 */
int isEmptyQueue(Queue *queue);

/**
 * getQueueSize returns the size of the target Queue.
 *
 * @param *queue - The Queue to return the size from.
 *
 * @returns the size property stored inside the queue passed into the function.
 */
int getQueueSize(Queue *queue);
#endif /* Queue_h */
