#ifndef STUDEND_HPP
#define STUDEND_HPP

#include <iostream>
#include <string>

class Student
{
  private:

  public:
  std::string m_name;
  Student ();
  ~Student ();
  void print_name ();
};

#endif