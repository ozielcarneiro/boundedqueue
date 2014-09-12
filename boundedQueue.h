/* 
 * File:   boundedQueue.h
 * Author: Oziel de Oliveira Carneiro
 *
 * Created on October 15, 2012, 1:34 PM
 * Last update on October 26, 2012, 4:11 PM
 */

#ifndef BOUNDEDQUEUE_H
#define	BOUNDEDQUEUE_H

class boundedQueue {
public:
    boundedQueue(int size);
    boundedQueue(const boundedQueue& orig);
    virtual ~boundedQueue();
    void enqueue(int x);
    int dequeue();
    void printQueue();
private:
    int* queue;
    int* start;
    int* end;
    int size;
    bool empty;
};

#endif	/* BOUNDEDQUEUE_H */

