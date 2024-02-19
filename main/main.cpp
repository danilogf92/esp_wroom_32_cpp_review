#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <driver/gpio.h>

#include "common_data.h"
#include "Array.hpp"

extern "C" {
  void app_main (void);
}

// Creates copies of the array for further processing, avoid this
void print_an_array (Array arr)
{
  //arr.print_data ();
}

void app_main (void)
{
  // Intialize all of our data up front
  Array my_array;

  my_array.set_data (0, 1234567);

  // Copy Constructor is called
  //Array my_array_2 = my_array;    // Avoid this copy, program does not compile with this code


  my_array.print_data ();
  print_newln ();
  //my_array_2.print_data ();

  //print_an_array (my_array); // Avoid this copy, program does not compile with this code

}



