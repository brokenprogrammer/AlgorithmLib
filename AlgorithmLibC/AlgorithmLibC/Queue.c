//
//  Queue.c
//  AlgorithmLibC
//
//  Created by Oskar Mendel on 2/4/16.
//  Copyright © 2016 Oskar Mendel. All rights reserved.
//

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

Queue* initQueueWithData() {
    Queue *newQueue = (Queue*) malloc(sizeof(Queue));
    
    
    
    return newQueue;
}