/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/stack.cc
 *
 * Implementation for a Stack.
 */

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "stack.h"

template<typename T, typename I>
void Stack<T, I>::Push(const T& value) {
  _imp.PushFront(value);
}

template<typename T, typename I>
T Stack<T, I>::Pop() {
  return _imp.PopFront();
}

template<typename T, typename I>
bool Stack<T, I>::IsPalindrome() const {
  int len = _imp.Size();

  for(auto a = 0, z = len; a <= z; ++a, --z) {
    if(_imp[a] != _imp[z]) {
      return false;
    }
  }

  return true;
}

template<typename T, typename I>
void Stack<T, I>::Print() const {
  using std::cout;
  using std::endl;
  using std::setw;
  char t = '\t';

  cout << endl;
  cout << t << " vv STACK TOP vv " << endl;

  for(auto i = 0u; i < _imp.Size(); ++i) {
    const T val = _imp[i];
    cout << t << " [  " << setw(9) << val << "  ] " << endl;
  }

  cout << endl;
}
