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

struct Node {
    int data;
    struct Node *next;
};

typedef struct Queue {
    struct Node *first;
    struct Node *last;
    int size;
}Queue;

Queue* initQueueWithData(int val) {
    Queue *newQueue = (Queue*) malloc(sizeof(Queue));
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    
    newNode->data = val;
    
    newQueue->first = newNode;
    newQueue->last = newNode;
    newQueue->size = 0;
    
    return newQueue;
}

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

int isEmptyQueue(Queue *queue) {
    if (queue->first == NULL) {
        return 1;
    }
    return 0;
}

int getQueueSize(Queue *queue){
    return queue->size;
}