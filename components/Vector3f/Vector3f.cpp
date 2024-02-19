#include "Vector3f.hpp"
#include <iostream>

Vector3f::Vector3f ()
{
  x = 0.0f;
  y = 0.0f;
  z = 0.0f;
}

Vector3f::~Vector3f ()
{}

Vector3f Vector3f::operator + (const Vector3f& rhs) const
{
  Vector3f result;
  result.x = x + rhs.x;
  result.y = y + rhs.y;
  result.z = z + rhs.z;

  return result;
}

Vector3f Vector3f::operator++()
{
  x = x + 1;
  y = y + 1;
  z = z + 1;

  return *this;
}

bool Vector3f::operator==(const Vector3f& rhs)
{
  std::cout << "Class function" << std::endl;
  return ( x == rhs.x && y == rhs.y && z == rhs.z );
}
