/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/linked_list.h
 *
 * Defines the interface for a Linked List.
 */
#ifndef CSCI2270_ASSIGNMENT3_LLIST_H
#define CSCI2270_ASSIGNMENT3_LLIST_H

template<typename T>
struct Node {
  T value;
  Node* next;
};

template<typename T>
class LinkedList {
  private:
    Node<T>* _head;

  public:
    LinkedList() {
      _head = nullptr;
    }

    // methods
    void InsertAt(int index, T value);
    T RemoveAt(int index);

    void PushFront(T value) { InsertAt(0, value); }
    void PushBack(T value) { InsertAt(Size(), value); }
    T PopFront() { return RemoveAt(0); }
    T PopBack() { return RemoveAt(Size()); }

    // constant methods
    T& operator[] (int index) const;
    int Size() const;
};

#endif
