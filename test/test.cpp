#include <iostream>
#include "base/base.h"
#include "base/base_declaration.hxx"
#include "base/base_definition.t.cpp"


// same as witness method, but import the specialization from the lib
std::string witness2 ()
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

int main()
{
  std::string baseResult = witness();
  std::cout << " ** expected **" << std::endl << baseResult << std::endl;  

  std::string newResult = witness2();
  std::cout << " ** now **" << std::endl << newResult << std::endl;

  return baseResult.compare(newResult);
}