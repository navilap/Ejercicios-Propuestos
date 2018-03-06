/* Este código le pide al usuario digitar un número entero positivo e imprime el valor de Pi según la Fórmula de Leibniz para dicho valor */

#include <iostream>
#include <math.h>

double Leibniz (int x)
{
  double sumapi = 0;
  for(int y = 0; y <= x; ++y)
    {
      sumapi += 4*(pow(-1, y)+0.0)/(2*y + 1);
    }
  return sumapi;
}

int main ()
{
  int x = 0;
  std::cout<<"Ingrese un valor entero mayor o igual a cero \n";
  std::cin>>x;
  std::cout<<"El valor de Pi según la Fórmula de Leibniz para x = "<<x<<" es "<<Leibniz(x)<<"\n";
  return 0;
}
