/* Este programa le pide al usuario que ingrese dos valores e imprime cúal es m\
   enor, la suma, la diferencia, el producto y la división */

#include <iostream>
int main ()
{
  double value1 = 0;
  double value2 = 0;
  double result2=0;
  std::cout << "Ingresa un valor entero: \n";
  std::cin >> value1;
  std::cout << "Ingresa un entero valor distinto: \n";
  std::cin >> value2;
  if (value1<value2)
    std::cout <<value1<<" < "<<value2<<"\n";
  else
    std::cout<<value1<<" > "<<value2<<"\n";
  result2= value1 + value2;
  std::cout <<value1<<" + "<<value2<<" = " <<result2<< "\n";
  result2= value1 - value2;
  std::cout<<value1<<" - "<<value2<<" = " <<result2<< "\n";
  result2 = value1 * value2;
  std::cout<<value1<<" x "<<value2<<" = " <<result2<< "\n";
  result2= (value1 + 0.0) / value2;
  std::cout<<value1<<"/"<<value2<<" = " <<result2<< "\n";
  return 0;
}
