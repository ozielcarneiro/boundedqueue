/* 
 * File:   boundedQueue.cpp
 * Author: Oziel de Oliveira Carneiro
 * 
 * Created on October 15, 2012, 1:34 PM
 * Last update on October 26, 2012, 4:11 PM
 */

#include "boundedQueue.h"
#include <iostream>

using namespace std;

boundedQueue::boundedQueue(int size) {
    this->size = size;
    queue = new int[size];
    start = queue;
    end = queue;
    empty = 1;
}

boundedQueue::boundedQueue(const boundedQueue& orig) {
}

boundedQueue::~boundedQueue() {
}

void boundedQueue::enqueue(int x) {
    if (!(!empty && end == start)) {
        *end = x;
        empty = 0;
        if (end == queue + (size - 1)) {
            end = queue;
        } else {
            end++;
        }
    } else {
        cout << "full queue" << endl;
    }
}

int boundedQueue::dequeue() {
    if (!(empty && end == start)) {
        int x = *start;
        if (start == queue + (size - 1)) {
            start = queue;
        } else {
            start++;
        }
        if (start == end) {
            empty = 1;
        }
        return x;
    } else {
        cout << "empty queue";
        return NULL;
    }
}

void boundedQueue::printQueue() {
    int* point = start;
    if (end != start || empty) {
        while (point != end) {
            cout << *point << ";";
            if (point == queue + (size - 1)) {
                point = queue;
            } else {
                point++;
            }
        }
    } else {
        for (int i = 0; i < size; i++) {
            cout << *point << ";";
            if (point == queue + (size - 1)) {
                point = queue;
            } else {
                point++;
            }
        }

    }
    cout << endl;
}
