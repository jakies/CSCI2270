/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.h
 *
 * Defines the interface for a Queue.
 */
#ifndef QUEUE_H
#define QUEUE_H

class Queue {
  private:
    int _used;

  public:
    // constructor
    Stack() {
      _used = 0;
    }

    // methods
    void Enqueue(const int& value);
    int Dequeue();

    // constant methods
    bool IsEmpty() const { return _used == 0; }
    int Size() const { return _used; }
    int Top() const;
}

#endif
