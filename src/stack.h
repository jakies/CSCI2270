/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.h
 *
 * Defines the interface for a Stack.
 */
#ifndef STACK_H
#define STACK_H

class Stack {
  private:
    int _used;

  public:
    // constructor
    Stack() {
      _used = 0;
    }

    // methods
    void Push(const int& value);
    int Pop();

    // constant methods
    bool IsEmpty() const { return _used == 0; }
    int Size() const { return _used; }
    int Top() const;
}

#endif
