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
  Student* student_1 = new Student;
  delete student_1;
  std::cout << "Program ends" << std::endl;


  Student student_2;
  student_2.m_name = "Danilo";
  student_2.print_name ();

  Student student_3;
  student_3.m_name = "Susan";
  student_3.print_name ();
}



