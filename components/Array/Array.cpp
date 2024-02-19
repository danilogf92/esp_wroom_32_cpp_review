#include "Array.hpp"

Array::Array ()
{
  std::cout << "Constructor" << std::endl;
  for ( int i = 0; i < 1; i++ )
  {
    data.push_back (i);
  }
}

// Copy Constructor with own memory
Array::Array (const Array& before)
{
  std::cout << "Copy Constructor" << std::endl;
  for ( int i = 0; i < before.data.size (); i++ )
  {
    data.push_back (before.data[i]);
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

  data.clear ();
  for ( int i = 0; i < arr.data.size (); i++ )
  {
    data.push_back (arr.data[i]);
  }

  return *this;
};

Array::~Array ()
{}

void Array::print_data (void)
{
  for ( int i = 0; i < data.size (); i++ )
  {
    std::cout << data[i] << std::endl;
  }
}

void Array::set_data (int index, int value)
{
  data[index] = value;
}
