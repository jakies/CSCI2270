/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/linked_list.cc
 *
 * Implementation for a Linked List.
 */

#include "linked_list.h"

template<typename T>
int LinkedList<T>::Size() const {
  auto c = 0u;
  for(Node<T> *t = _head; t; t = t->next, ++c);
  return c;
}

template<typename T>
void LinkedList<T>::InsertAt(int index, T value) {
  Node<T> *c = _head, *n = new Node<T>{value, nullptr}, *t;
  if(!_head || !index) {
	  n->next = _head;
	  _head = n;
    return;
  }
  for(auto i = 0u; i < index-1; ++i, c = c->next);
  t = c->next, c->next= n; 
  n->next = t;
}

template<typename T>
T LinkedList<T>::RemoveAt(int index) {
  Node<T> *c = _head, *t;
  if(index == 0) {
	  t = _head, _head = _head->next;
    return t->value;
  }
  for(auto i = 0u; i < index-1; ++i, c = c->next);
  t = c->next; 
  c->next = t->next;
  return t->value;
}

template<typename T>
T& LinkedList<T>::operator[] (int index) const {
	Node<T> *c = _head;
	for(auto i = 0u; i < index; i++, c = c->next);
	return c->value;
}
