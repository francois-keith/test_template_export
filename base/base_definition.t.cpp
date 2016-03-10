#include <sstream>
#include <iostream>
#include "base_declaration.hxx"

template <class T>
std::string toString(T elmt)
{
  std::ostringstream oss;
  oss << elmt;
  return oss.str();
}


//// Templated class definition
template <class T>
MyConvertor<T>::MyConvertor(T a)
: elmt_(a)
{}

template <class T>
std::string MyConvertor<T>::convert() const
{
  std::ostringstream oss;
  oss << "MyConvertor: " << elmt_;
  return oss.str();
}


