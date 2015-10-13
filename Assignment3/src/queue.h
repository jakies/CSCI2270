/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.h
 *
 * Defines the interface for a Queue.
 */
#ifndef CSCI2270_ASSIGNMENT3_QUEUE_H
#define CSCI2270_ASSIGNMENT3_QUEUE_H

template<typename T, typename I>
class Queue {
  private:
    I _imp;

  public:
    Queue(I imp) {
      _imp = imp;
    }

    // methods
    void Prompt();
    void Enqueue(const T& value);
    T Dequeue();

    // constant methods
    bool IsPalindrome() const;
    void Print() const;
};
#endif
