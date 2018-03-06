/* Este código pide al usuario que digite la cantidad de númerosa promediar, luego una lista de aquellos  números e imprime su promedio */

#include <iostream>

int main()
{
  int cant = 0;
  double suma = 0;
  double promedio = 0;
  double num = 0;
  std::cout<<"Ingrese la cantidad de números a promediar \n";
  std::cin>>cant;
  for (int x = 1; x <= cant; ++x)
    {
      std::cout<<"Ingrese el valor "<<x<<"\n";
      std::cin>>num;
      suma += num;
    }
  promedio = suma / cant;
  std::cout<<"El promedio es "<<promedio<<"\n";
  return 0;
}
