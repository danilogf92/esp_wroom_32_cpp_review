#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <driver/gpio.h>

#include "common_data.h"
#include "Array.hpp"

extern "C" {
  void app_main (void);
}

void app_main (void)
{
  Array my_array;
  Array my_array_3 = my_array; // Copy constructor

  my_array.set_data (0, 10000);
  my_array.set_data (1, 99);
  my_array.set_data (2, 77);

  Array my_array_2;
  my_array_2 = my_array; // Copy assignment operator

  my_array.print_data ();
  print_newln ();
  my_array_2.print_data ();
}



