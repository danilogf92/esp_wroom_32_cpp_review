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

void app_main (void)
{
  Vector3f my_vector;

  std::cout << my_vector << std::endl;
}





