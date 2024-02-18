#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

class Array
{
  private:
  int* data;

  public:
  Array ();
  Array (const Array& before);
  Array& operator=(const Array& arr);
  ~Array ();
  void print_data (void);
  void set_data (int index, int value);
};

#endif
