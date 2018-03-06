/* Este código pregunta al usuario sobre una cantidad de millas determinado e imprime en la pantalla su equivalente en kilómetros*/

#include <iostream>
int main()
{
  double  miles =0;
  double  kilometers =0;
  const double kilometers_per_mile = 1.609;
  std::cout << "Ingresa el número de millas a convertir: \n";
  std::cin >> miles;
  kilometers = miles*kilometers_per_mile;
  std::cout << miles<<  " millas = " << kilometers<< " kilómetros \n";
  return 0;
}
