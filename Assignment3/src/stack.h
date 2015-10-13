/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.h
 *
 * Defines the interface for a Stack.
 */
#ifndef CSCI2270_ASSIGNMENT3_STACK_H
#define CSCI2270_ASSIGNMENT3_STACK_H

template<typename T, typename I>
class Stack {
  private:
    I _imp;
    
  public:
    Stack(I imp) {
      _imp = imp;
    }

    // methods
    void Push(const T& value);
    T Pop();

    // constant methods
    bool IsPalindrome() const;
    void Print() const;
};
#endif
