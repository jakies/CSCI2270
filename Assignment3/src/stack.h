/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.h
 *
 * Defines the interface for a Stack.
 */
#ifndef STACK_H
#define STACK_H

#include "adt.h"

template<typename T>
class Stack: public ADT {
  public:
    // methods
    void Push(const T& value);
    T Pop();
}

#endif
