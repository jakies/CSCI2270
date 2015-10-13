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

template<typename T, typename I>
void Stack<T, I>::Prompt() {
  while(true) {
    printf("\n");
    printf("  Please choose an operation:\n");
    printf("    1) PUSH\n");
    printf("    2) POP\n");
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
        (*this)->Push(val);
        break;

      case 2: 
        printf("  You just removed: %s\n", (*this)->Pop());
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
