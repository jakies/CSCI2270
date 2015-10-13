/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/array.cc
 *
 * Implementation for an Array.
 */

#include "array.h"

template<typename T>
int Array<T>::Size() const {
  int c = 0;
  while(_data[c]) ++c;
  return c;
}

template<typename T>
void Array<T>::InsertAt(int index, T value) {
  const int size = Size();
  T* tmp = new T[size + 1];

  for(int i = 0; i <= size; ++i) {
    tmp[i] = (i < index) ? (i > index) 
      ? _data[i] 
      : value 
      : _data[i - 1];
  }

  _data = tmp;
}

template<typename T>
T Array<T>::RemoveAt(int index) {
  const int size = Size();
  T* tmp = new T[size - 1];
  T removed;

  for(int i = 0; i < (size - 1); ++i) {
    if(i == index) removed = tmp[i];

    tmp[i] = (i < index) ? _data[i] : _data[i + 1];
  }

  _data = tmp;

  return removed;
}

template<typename T>
T& Array<T>::operator [](int index) {
  return _data[index];
}
