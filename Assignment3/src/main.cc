/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/main.cc
 *
 * Describes the execution of the Assignment 3 program.
 * Build with the `start.sh` script from the parent directory.
 */

#include <stdio.h>
#include "stack.cc"
#include "queue.cc"
#include "array.cc"
#include "linked_list.cc"

Stack<int, LinkedList<int> > * makeStackLL();
Stack<int, Array<int> > * makeStackArray();
Queue<int, LinkedList<int> > * makeQueueLL();
Queue<int, Array<int> > * makeQueueArray();

int strucSelect();
int implemenSelect();

int main() {
  int first = strucSelect();
  int second = implemenSelect(); 

  switch(first+second) {
    case  5: makeStackArray()->Prompt();
    case  9: makeStackLL()->Prompt();
    case  6: makeQueueArray()->Prompt();
    case 10: makeQueueLL()->Prompt();
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

Stack<int, LinkedList<int> > * makeStackLL() {
  LinkedList<int> a;
  return new Stack<int, LinkedList<int> >(a);
}

Stack<int, Array<int> > * makeStackArray() {
  Array<int> a;
  return new Stack<int, Array<int> >(a);
}

Queue<int, LinkedList<int> > * makeQueueLL() {
  LinkedList<int> a;
  return new Queue<int, LinkedList<int> >(a);

}

Queue<int, Array<int> > * makeQueueArray() {
  Array<int> a;
  return new Queue<int, Array<int> >(a);
}

