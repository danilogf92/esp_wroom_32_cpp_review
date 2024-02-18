#include "Student.hpp"

Student::Student ()
{
  m_name = "no name";
  std::cout << "Constructor " << std::endl;
  std::cout << "m_name is: " << m_name << std::endl;
}

Student::Student (std::string _name)
{
  m_name = _name;
  std::cout << "Constructor " << std::endl;
  std::cout << "m_name is: " << m_name << std::endl;
}

Student::~Student ()
{
  std::cout << "Destructor " << m_name << std::endl;
}

void Student::print_name ()
{
  std::cout << "Name is: " << m_name << std::endl;
}