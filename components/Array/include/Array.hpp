#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <vector>

class Array
{
  public:
  // (1) Constructor
  Array ();
  // (2) Destructor
  ~Array ();

  // (4) Copy assignment Operator
  Array& operator=(const Array& arr);

  void print_data (void);
  void set_data (int index, int value);

  private:
  // (3) Copy constructor
  Array (const Array& before);
  std::vector<int> data;
};

#endif
