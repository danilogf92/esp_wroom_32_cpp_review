#include <iostream>

#include "common_data.h"
#include "Vector3f.hpp"

extern "C" {
  void app_main (void);
}

std::ostream& operator<<(std::ostream& os, const Vector3f& obj)
{
  os << obj.x << "," << obj.y << "," << obj.z;
  return os;
}

bool operator==(const Vector3f& lhs, const Vector3f& rhs)
{
  std::cout << "Free function" << std::endl;
  return ( lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z );
}


void app_main (void)
{
  Vector3f my_vector;
  my_vector.x = 0.9999999f;
  my_vector.y = 0.9999999f;
  my_vector.z = 0.9999999f;
  Vector3f my_vector_2;
  my_vector_2.x = 1.f;
  my_vector_2.y = 1.f;
  my_vector_2.z = 1.f;

  if ( my_vector == my_vector_2 )
  {
    std::cout << "Vectors are equal" << std::endl;
  }
  else
  {
    std::cout << "Vectors are not equal" << std::endl;
  }

  my_vector = my_vector + my_vector_2;

  ++my_vector;

  std::cout << my_vector << std::endl;
}





