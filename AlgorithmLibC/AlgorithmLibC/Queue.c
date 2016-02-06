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

#include "Queue.h"
#include "stdlib.h"

/**
 * struct Node is used as the linked elements within the Queue
 * structure. It can contain a data and a pointer to the next 
 * element in the linked list.
 */
struct Node {
    int data;
    struct Node *next;
};

/**
 * struct Queue represents a Queue data structure
 * using a linked list. The empty list is represented by
 * a NULL pointer. To create a new Queue create a variable
 * of this type containing a pointer to NULL.
 */
typedef struct Queue {
    struct Node *first;
    struct Node *last;
    int size;
}Queue;

/**
 * initQueueWithData initializes a new Queue by allocating a new pointer with
 * the ammount of memory a Queue needs. Then after checking if the newly
 * created stack is NULL or not its values are initialized by initializing a 
 * new Node which will store the data passed into the parameters. Then the
 * Node is stored inside the Queue as the first and last element of the Queue.
 *
 * @param val - Value to place in the first & last Node of the Queue.
 *
 * @returns pointer to the just initialized Queue structure(object).
 */
Queue* initQueueWithData(int val) {
    Queue *newQueue = (Queue*) malloc(sizeof(Queue));
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    
    if(newQueue == NULL || newNode == NULL) {
        return NULL;
    }
    newNode->data = val;
    
    newQueue->first = newNode;
    newQueue->last = newNode;
    newQueue->size = 0;
    
    return newQueue;
}

/**
 * enqueue is the function that adds a new value in end of the Queue and then
 * makes the previous last element point to it.
 *
 * @param **queue - Pointer to the Pointer to queue, the target queue to look
 * at. Lets us manipulate the Queue inside this function.
 */
void enqueue(Queue **queue, int val) {
    struct Node *oldLast = (*queue)->last;
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    
    newNode->data = val;
    newNode->next = NULL;
    
    (*queue)->last = newNode;
    
    if (isEmptyQueue(*queue)) {
        (*queue)->first = (*queue)->last;
    } else {
        oldLast->next = newNode;
    }
    
    (*queue)->size++;
}

/**
 * dequeue is the function that returns the value in front of the Queue and then
 * removing it from the Queue passed into the parameters. 
 *
 * @param **queue - Pointer to the Pointer to queue, the target queue to look 
 * at. Lets us manipulate the Queue inside this function.
 *
 * @returns the value stored in the front of the Queue. Returns -1 if there is
 * nothing in the front of the Queue.
 */
int dequeue(Queue **queue) {
    struct Node *oldFirst = (*queue)->first;
    int retval = -1;
    if (!isEmptyQueue(*queue)) {
        retval = oldFirst->data;
        (*queue)->first = (*queue)->first->next;
        free(oldFirst);
        (*queue)->size--;
    }
    
    if (isEmptyQueue(*queue)) {
        (*queue)->last = NULL;
    }
    return retval;
}

/**
 * peekQueue lets the caller view the value of the element at the front of the
 * queue without removing it.
 *
 * @param *queue - Pointer to queue, the target queue to look at.
 *
 * @returns The data value found in the front of the Queue. Returns -1 if the
 * Queue is empty.
 */
int peekQueue(Queue *queue) {
    struct Node *currentFirst;
    if (!isEmptyQueue(queue)) {
        currentFirst = queue->first;
        return currentFirst->data;
    }
    
    return -1;
}

/**
 * isEmptyQueue checks if the Queue passed into the parameters is empty.
 *
 * @param *queue - The Queue to check if empty or not.
 *
 * @returns 1 if the Queue is empty. Returns 0 if the Queue is not empty.
 */
int isEmptyQueue(Queue *queue) {
    if (queue->first == NULL) {
        return 1;
    }
    return 0;
}

/**
 * getQueueSize returns the size of the Queue passed into the parameters.
 *
 * @param *queue - The Queue to return the size from.
 *
 * @returns the size property stored inside the queue passed into the function.
 */
int getQueueSize(Queue *queue){
    return queue->size;
}