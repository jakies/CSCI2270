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
    printf("   [ %11s ]\n", _imp[i]);
  }
  printf("\n");
}

template<typename T, typename I>
void Queue<T, I>::Prompt() {
  while(true) {
    printf("\n");
    printf("  Please choose an operation:\n");
    printf("    1) ENQUEUE\n");
    printf("    2) DEQUEUE\n");
    printf("    3) PRINT\n");
    printf("    4) IS PALINDROME?\n");
    printf("    5) EXIT\n");
    printf("\n");
    printf("  > ");

    switch(getchar()-48) {
      case 1: 
        printf("  Give me a value > ");
        T val;
        getline(std::cin, val);
        (*this)->Enqueue(val);
        break;

      case 2: 
        printf("  You just removed: %s\n", (*this)->Dequeue());
        break;

      case 3: 
        (*this)->Print();
        break;

      case 4:
        (*this)->IsPalindrome();
        break;

      case 5:
        exit(0);

      default:
        printf("  That is not an option.\n");
    }
  }
}
