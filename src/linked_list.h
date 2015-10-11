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

class LinkedList {
  private:
    Node* _head;

  public:
    LinkedList() {
      _head = nullptr;
    }

    // methods
    void InsertAt(int index, int value) { _data.insert(index, value); }
    int RemoveAt(int index) { 
      int v = _data[index];
      _data.erase(index);
      return v;
    }

    int PopFront() { RemoveAt(0); }
    int PopBack() { RemoveAt(Size()); }
    void PushFront(int value) { InsertAt(0, value); }
    void PushBack(int value) { InsertAt(Size(), value); }
    int& operator[] (int index) { return _data[index] };

    // constant methods
    int Size() const { return _data.size(); }
}

#endif
