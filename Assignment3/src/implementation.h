/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/implementation.h
 *
 * Defines the interface for an Implementation.
 */
#ifndef CSCI2270_ASSIGNMENT3_IMPLEMENTATION_H
#define CSCI2270_ASSIGNMENT3_IMPLEMENTATION_H

template<typename T>
class Implementation {
  private:
    int _used = 0;

  public:
    // methods
    virtual void InsertAt(int index, T value);
    virtual T RemoveAt(int index);
    virtual T& operator[] (int index);

    // constant methods
    virtual int Size() const { return _used; }
    virtual bool IsEmpty() const { return Size() == 0; }
};

#endif

