/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.cc
 *
 * Implementation for a Queue.
 */

#include <stdio.h>
#include "queue.h"

template<typename T, typename I>
void Queue<T, I>::Enqueue(const T& value) {
  _imp.PushBack(value);
}

template<typename T, typename I>
T Queue<T, I>::Dequeue() {
  _imp.PopFront();
}

template<typename T, typename I>
bool Queue<T, I>::IsPalindrome() const {
  int len = _imp.Size()/2;
  for(int i = 0; i < len; ++i) {
    if(_imp[i] != _imp[len - i]) {
      return false;
    }
  }

  return true;
}

template<typename T, typename I>
void Queue<T, I>::Print() const {
  printf("\n");
  printf("  vv QUEUE FRONT vv\n");
  for(int i = 0; i < _imp.Size(); ++i) {
    T v = _imp[i];
    printf("   [ %11s ]\n", v);
  }
  printf("\n");
}
