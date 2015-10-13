/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.cc
 *
 * Implementation for a Stack.
 */

#include <stdio.h>
#include "stack.h"

template<typename T, typename I>
void Stack<T, I>::Push(const T& value) {
  _imp.PushFront(value);
}

template<typename T, typename I>
T Stack<T, I>::Pop() {
  _imp.PopFront();
}

template<typename T, typename I>
bool Stack<T, I>::IsPalindrome() const {
  int len = _imp.Size()/2;
  for(int i = 0; i < len; ++i) {
    if(_imp[i] != _imp[len - i]) {
      return false;
    }
  }

  return true;
}

template<typename T, typename I>
void Stack<T, I>::Print() const {
  printf("\n");
  printf("  vv STACK TOP vv\n");
  for(int i = 0; i < _imp.Size(); ++i) {
    printf("   [ %9s ]\n", _imp[i]);
  }
  printf("\n");
}
