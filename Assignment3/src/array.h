/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/array.h
 *
 * Defines the interface for an Array.
 */
#ifndef ARRAY_H
#define ARRAY_H

#include <vector>

class Array {
  private:
    vector<int> _data;

  public:

    Array();
    ~Array();

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
