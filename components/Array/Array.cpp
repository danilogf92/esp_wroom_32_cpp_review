#include "Array.hpp"

Array::Array ()
{
  std::cout << "Constructor" << std::endl;
  data = new int[10];
  for ( int i = 0; i < 10; i++ )
  {
    data[i] = i * i;
  }
}

// Copy Constructor with own memory
Array::Array (const Array& before)
{
  std::cout << "Copy Constructor" << std::endl;
  data = new int[10];
  for ( int i = 0; i < 10; i++ )
  {
    data[i] = before.data[i];
  }
}

// Copy Assignment operator
Array& Array::operator = (const Array& arr)
{
  std::cout << "Copy assignment operator" << std::endl;

  if ( &arr == this )
  {
    return *this;
  }

  delete[] data;
  data = new int[10];
  for ( int i = 0; i < 10; i++ )
  {
    data[i] = arr.data[i];
  }

  return *this;
};

Array::~Array ()
{
  delete[] data;
}

void Array::print_data (void)
{
  for ( int i = 0; i < 10; i++ )
  {
    std::cout << data[i] << std::endl;
  }
}

void Array::set_data (int index, int value)
{
  data[index] = value;
}
