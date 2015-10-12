/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.h
 *
 * Defines the interface for a Queue.
 */
#ifndef QUEUE_H
#define QUEUE_H

#include "adt.h"

template<typename T>
class Queue: public ADT {
  public:
    // methods
    void Enqueue(const T& value);
    T Dequeue();
}

#endif
