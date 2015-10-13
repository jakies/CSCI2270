/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.h
 *
 * Defines the interface for a Stack.
 */
#ifndef CSCI2270_ASSIGNMENT3_STACK_H
#define CSCI2270_ASSIGNMENT3_STACK_H

#include "structure.h"

template<typename T>
class Stack: public Structure {
  public:
    // methods
    void Push(const T& value);
    T Pop();
}

#endif
