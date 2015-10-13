/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/array.h
 *
 * Defines the interface for an Array.
 */
#ifndef CSCI2270_ASSIGNMENT3_ARRAY_H
#define CSCI2270_ASSIGNMENT3_ARRAY_H

template<typename T>
class Array {
  private:
    T* _data;

  public:
    Array() {
      _data = new T[0];
    }

    // methods
    void Prompt();

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
