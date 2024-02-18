#include "Student.hpp"

Student::Student ()
{
  std::cout << "Constructor " << std::endl;
}

Student::~Student ()
{
  std::cout << "Destructor " << m_name << std::endl;
}

void Student::print_name ()
{
  std::cout << "Name is: " << m_name << std::endl;
}