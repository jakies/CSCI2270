/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.h
 *
 * Defines the interface for a Queue.
 */
#ifndef CSCI2270_ASSIGNMENT3_QUEUE_H
#define CSCI2270_ASSIGNMENT3_QUEUE_H

#include "structure.h"

template<typename T>
class Queue: public Structure {
  public:
    // methods
    void Enqueue(const T& value);
    T Dequeue();
}

#endif
