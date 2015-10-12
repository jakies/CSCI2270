/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/array.h
 *
 * Defines the interface for an Array.
 */
#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array {
  private:
    T* _data;

    void _refitArray();

  public:
    static final int INIT_CAPACITY = 8;

    // constructor
    Array() {
      _data = new T[INIT_CAPACITY];
    }

    // methods
    void InsertAt(int index, T value);
    T RemoveAt(int index); 
    T& operator[] (int index);

    T PopFront() { RemoveAt(0); }
    T PopBack() { RemoveAt(Size()); }
    void PushFront(T value) { InsertAt(0, value); }
    void PushBack(T value) { InsertAt(Size(), value); }
    T& operator[] (int index) { return _data[index] };

    // constant methods
    int Size() const;
}
#endif
