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

#include "Bag.h"

/**
 * A bag is a collection of objects, where you can keep adding objects to the
 * bag, but you cannot remove them once added to the bag. So with a bag data
 * structure, you can collect all the objects, and then iterate through them.
 */
typedef struct Bag {
    struct Bag *next;
    int data;
}Bag;

/**
 * Adds a new value into the Bag.
 *
 * @param **head - Pointer to the head pointer. Lets us manipulate the
 * head variable within this function.
 * @param val - Value to insert into the Bag.
 */
void add(Bag **head, int val) {
    Bag *newBag = malloc(sizeof(*newBag));
    
    if(newBag == NULL) {
        return;
    }
    
    newBag->data = val;
    newBag->next = *head;
    *head = newBag;
}

/**
 * isEmptyBag checks if the target Bag is empty or not.
 *
 * @param *head - The Bag to check if empty or not.
 *
 * @returns 1 if the Bag is empty. Returns 0 if the Bag is not empty.
 */
int isEmptyBag(Bag *head) {
    return !head;
}

/**
 * sizeBag returns the size of target Bag.
 *
 * @param *head - The Bag to return the size of.
 *
 * @returns Number of elements stored in the Bag.
 */
int sizeBag(Bag *head) {
    int size = 0;
    
    if (!isEmptyBag(head)) {
        Bag *current = head;
        for (; current; current = current->next) {
            size++;
        }
    }
    return size;
}