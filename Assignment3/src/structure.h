/**
 * Jacob Selig (jacob.selig@colorado.edu)
 * TA - Guohui Ding
 * File - src/structure.h
 *
 * Defines the interface for a Structure.
 */
#ifndef CSCI2270_ASSIGNMENT3_STRUCTURE_H
#define CSCI2270_ASSIGNMENT3_STRUCTURE_H

template<typename T>
class Structure {
  public:
    // constant methods
    virtual bool IsPalindrome() const;
    virtual void Print() const;
}

#endif
