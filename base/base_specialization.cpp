#include <iostream>
#include "base.h"
#include "base_declaration.hxx"
#include "base_definition.t.cpp"

//// Method specialization
std::string toString(int elmt)
{
  std::ostringstream oss;
  oss << "an int ! "  << elmt;
  return oss.str();
}





//// Templated class specialization
template <>
MyConvertor<std::string>::MyConvertor(std::string a)
: elmt_(" *" + a + "* ")
{}

template <>
std::string MyConvertor<std::string>::convert() const
{
  return "MyConvertor (Specialization) " + elmt_;
}



std::string witness ()
{
  std::string value;
  value = toString(5) + " // ";
  value += toString("Hello") + " // ";

  MyConvertor<int> a(1);
  MyConvertor<std::string> b("test");
  value += a.convert() + " // ";
  value += b.convert() + " // ";
  
  return value;
}
