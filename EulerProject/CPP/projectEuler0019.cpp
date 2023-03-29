/*
Jesus M. Huayhua Flores 
src: https://projecteuler.net/problem=19
pdf: no
*/
#include <iostream>

bool isLeapYear(int year){
  /*
  Un año es bisiesto si este es divisible por 4 pero no por 100(un sigle)
  o si solo es divisible es 400
  */
  return (((year%4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int main() {
  int monthDays[12] = {
    31,// Enero
    29,// Febrero
    31,// Marzo
    30,// Abril
    31,// Mayo
    30,// Junio
    31,// Julio
    31,// Agosto
    30,// Septiembre
    31,// Octubre
    30,// Noviembre
    31 // Diciembre
  };
  int sumCount = 0;
  int month;
  int year;
  int dayOfWeek = 1;
  for(month = 1; month <= 12; month++){
    dayOfWeek += (monthDays[month - 1] % 7);
    if (dayOfWeek > 7){
      dayOfWeek = 0 + dayOfWeek%7;
    }
  }
  
  for (year = 1901; year <= 2000; year++) {
    monthDays[1] = isLeapYear(year) ? 29 : 28;
    for(month = 1; month <= 12; month++){
      dayOfWeek += (monthDays[month - 1] % 7);
      if (dayOfWeek > 7){
        dayOfWeek = 0 + dayOfWeek%7;
      }else if(dayOfWeek == 7){
        sumCount++;
      }
    }
  }
  std::cout << "Sum Count: " << sumCount << std::endl;
  
  return 0;
}
/*
 Si el mes tiene X dias:
  X % 7 = R
  Donde 'R' es la cantidad de días que va a tener que avanzar el 1er día
  de la semana.
*/
