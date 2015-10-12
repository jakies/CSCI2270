/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/linked_list.h
 *
 * Defines the interface for a Linked List.
 */
#ifndef LLIST_H
#define LLIST_H

struct Node {
  int value;
  Node* next;
}

template<typename T>
class LinkedList {
  private:
    Node* _head;

  public:
    LinkedList() {
      _head = nullptr;
    }

    // methods
    void InsertAt(int index, T value);
    T RemoveAt(int index);
    T& operator[] (T index);

    // constant methods
    int Size() const;
    bool IsEmpty() const { return Size == 0 };
}
#endif
