/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/queue.cc
 *
 * Implementation for a Queue.
 */

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "queue.h"

template<typename T, typename I>
void Queue<T, I>::Enqueue(const T& value) {
  _imp.PushBack(value);
}

template<typename T, typename I>
T Queue<T, I>::Dequeue() {
  return _imp.PopFront();
}

template<typename T, typename I>
bool Queue<T, I>::IsPalindrome() const {
  int len = _imp.Size();

  for(auto a = 0, z = len; a <= z; ++a, --z) {
    if(_imp[a] != _imp[z]) {
      return false;
    }
  }

  return true;
}

template<typename T, typename I>
void Queue<T, I>::Print() const {
  using std::cout;
  using std::endl;
  using std::setw;
  char t = '\t';

  cout << endl;
  cout << t << " vQUEUE FRONTv " << endl;

  for(auto i = 0u; i < _imp.Size(); ++i) {
    cout << t << " [  " << setw(9) << _imp[i] << "  ] " << endl;
  }

  cout << endl;
}
