/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/main.cc
 *
 * Describes the execution of the Assignment 3 program.
 * Build with the `start.sh` script from the parent directory.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include "stack.cc"
#include "queue.cc"
#include "array.cc"
#include "linked_list.cc"

void startStackLL();
void startStackArray();
void startQueueLL();
void startQueueArray();

template<typename I>
void queuePrompt(Queue<int, I>* myQueue);

template<typename I>
void stackPrompt(Stack<int, I>* myStack);

int strucSelect();
int implemenSelect();

int main() {
  int first = strucSelect();
  int second = implemenSelect(); 

  switch(first+second) {
    case  5: startStackArray(); 
    case  9: startStackLL();
    case  6: startQueueArray(); 
    case 10: startQueueLL();
  }

  return 0;
}

int strucSelect() {
  printf("\n");
  printf("  Please choose a structure:\n");
  printf("    1) Create Stack\n");
  printf("    2) Create Queue\n");
  printf("    3) Exit\n");
  printf("\n");
  printf("  > ");

  while(true) {
    switch(getchar()-48) {
      case 1: return 1;
      case 2: return 2;
      case 3: exit(0);
    }
  }
}

int implemenSelect() {
  printf("\n");
  printf("  Please choose an implementation:\n");
  printf("    1) Array\n");
  printf("    2) Linked List\n");
  printf("\n");
  printf("  > ");

  while(true) {
    switch(getchar()-48) {
      case 1: return 4;
      case 2: return 8;
    }
  }
}

void startStackLL() {
  stackPrompt(new Stack<int, LinkedList<int> >(LinkedList<int>()));
}

void startStackArray() {
  stackPrompt(new Stack<int, Array<int> >(Array<int>())); 
}

void startQueueLL() {
  queuePrompt(new Queue<int, LinkedList<int> >(LinkedList<int>()));
}

void startQueueArray() {
  queuePrompt(new Queue<int, Array<int> >(Array<int>()));
}
  
template<typename I>
void queuePrompt(Queue<int, I>* myQueue) {
  std::string val;

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
        {
          printf("  Give me a value > ");
          getline(std::cin, val);
          const int v = atoi(val.c_str());
          myQueue->Enqueue(v);
        }
        break;

      case 2: 
        printf("  You just removed: %s\n", myQueue->Dequeue());
        break;

      case 3: 
        myQueue->Print();
        break;

      case 4:
        myQueue->IsPalindrome();
        break;

      case 5:
        exit(0);

      default:
        printf("  That is not an option.\n");
    }
  }
}

template<typename I>
void stackPrompt(Stack<int, I>* myStack) {
  std::string val;

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
        {
          printf("  Give me a value > ");
          getline(std::cin, val);
          const int v = atoi(val.c_str());
          myStack->Push(v);
        }
        break;

      case 2: 
        printf("  You just removed: %d\n", myStack->Pop());
        break;

      case 3: 
        myStack->Print();
        break;

      case 4:
        myStack->IsPalindrome();
        break;

      case 5:
        exit(0);

      default:
        printf("  That is not an option.\n");
    }
  }
}
