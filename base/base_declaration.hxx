#pragma once
#include <string>
#include "base_api.h"

// Templated method
template <class T>
std::string toString(T elmt);

// Templated method specialization
base_DLL_EXPORTS std::string toString(int elmt);



///////////////////////////////////
// Templated class
template <class T>
class MyConvertor
{
public:
  MyConvertor(T elmt);
  std::string convert() const;

private:
  T elmt_;
};

//// Templated class specialization
template <>
base_DLL_EXPORTS MyConvertor<std::string>::MyConvertor(std::string a);

template <>
base_DLL_EXPORTS std::string MyConvertor<std::string>::convert() const;
