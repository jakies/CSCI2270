/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/adt.h
 *
 * Defines the interface for an ADT.
 */
#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class ADT {
  public:
    // constant methods
    bool IsPalindrome() const;
    void Print() const;
}

#endif
