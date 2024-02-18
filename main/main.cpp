#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <driver/gpio.h>

#include "common_data.h"
#include "Student.hpp"

extern "C" {
  void app_main (void);
}

void app_main (void)
{
  std::cout << "Program starts" << std::endl;
  DELAY_SECONDS (COMMON_DATA_SECOND * 2);
  Student student_1 ("mike");
  student_1.print_name ();
  DELAY_SECONDS (COMMON_DATA_SECOND * 2);
  std::cout << "Program ends" << std::endl;
}



