/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/array.cc
 *
 * Implementation for an Array.
 */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "array.h"

template<typename T>
int Array<T>::Size() const {
  return _data.size();
}

template<typename T>
void Array<T>::InsertAt(int index, T value) {
  _data.insert(_data.begin()+index, value);
}

template<typename T>
T Array<T>::RemoveAt(int index) {
  const T value = _data[index];
  _data.erase(_data.begin()+index);

  return value;
}

template<typename T>
T& Array<T>::operator[] (int index) const {
  return _data[index];
}
