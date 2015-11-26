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
//#include "array.cc"
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
  using std::cout;
  using std::cin;
  using std::endl;
  int selection;

  cout << endl;
  cout << "  Please choose a structure:" << endl;
  cout << "    1) Create Stack" << endl;
  cout << "    2) Create Queue" << endl;
  cout << "    3) Exit" << endl;
  cout << endl;
  cout << "  > ";
  cin >> selection;

  switch(selection) {
    case 1: return 1;
    case 2: return 2;
    case 3: exit(0);
    default: 
    {
      cout << "  That is not an option." << endl;
      return strucSelect();
    }
  }
}

int implemenSelect() {
  using std::cout;
  using std::cin;
  using std::endl;
  int selection;

  cout << endl;
  cout << "  Please choose an implementation:" << endl;
  cout << "    1) Array" << endl;
  cout << "    2) Linked List" << endl;
  cout << endl;
  cout << "  > ";
  cin >> selection;

  switch(selection) {
    case 1: return 4;
    case 2: return 8;
    default: 
    {
      cout << "  That is not an option." << endl;
      return implemenSelect();
    }
  }
}

void startStackLL() {
  stackPrompt(new Stack<int, LinkedList<int> >(LinkedList<int>()));
}

void startStackArray() {
  //stackPrompt(new Stack<int, Array<int> >(Array<int>())); 
}

void startQueueLL() {
  queuePrompt(new Queue<int, LinkedList<int> >(LinkedList<int>()));
}

void startQueueArray() {
  //queuePrompt(new Queue<int, Array<int> >(Array<int>()));
}
  
template<typename I>
void queuePrompt(Queue<int, I>* myQueue) {
  using std::cout; 
  using std::cin;
  using std::endl;
  int inp, v;
  std::string val;

  while(true) {
    cout << endl;
    cout << "  Please choose an operation:" << endl;
    cout << "    1) ENQUEUE" << endl;
    cout << "    2) DEQUEUE" << endl;
    cout << "    3) PRINT" << endl;
    cout << "    4) IS PALINDROME?" << endl;
    cout << "    5) EXIT" << endl;
    cout << endl;
    cout << "  > ";
    cin >> inp;

    switch(inp) {
      case 1: 
        cout << "  Give me a value > "; 
        cin >> v;
        myQueue->Enqueue(v);
        break;

      case 2: 
        cout << "  You just removed: " << myQueue->Dequeue() << endl;
        break;

      case 3: 
        myQueue->Print();
        break;

      case 4:
        cout << "  This " << (myQueue->IsPalindrome() ? "IS" : "ISNT") << " a palindrome." << endl;
        break;

      case 5:
        exit(0);

      default:
        cout << "  That is not an option.";
    }
  }
}

template<typename I>
void stackPrompt(Stack<int, I>* myStack) {
  using std::cout;
  using std::cin;
  using std::endl;
  int inp, v;
  std::string val;

  while(true) {
    cout << endl;
    cout << "  Please choose an operation:" << endl;
    cout << "    1) PUSH" << endl;
    cout << "    2) POP" << endl;
    cout << "    3) PRINT" << endl;
    cout << "    4) IS PALINDROME?" << endl;
    cout << "    5) EXIT" << endl;
    cout << endl;
    cout << "  > ";
    cin >> inp;

    switch(inp) {
      case 1: 
        cout << "  Give me a value > ";
        cin >> v;
        myStack->Push(v);
        break;

      case 2: 
        cout << "  You just removed: " << myStack->Pop() << endl;
        break;

      case 3: 
        myStack->Print();
        break;

      case 4:
        cout << "  This " << (myStack->IsPalindrome() ? "IS" : "ISNT") << " a palindrome." << endl;
        break;

      case 5:
        exit(0);

      default:
        cout << "  That is not an option." << endl;
    }
  }
}
