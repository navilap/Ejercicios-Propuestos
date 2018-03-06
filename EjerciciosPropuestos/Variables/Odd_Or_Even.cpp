/* Este código solicita un número entero al usuario y le imprime en la pantalla si es par o impar */

#include<iostream>
int main()

{
  int numero = 0;
  double division = 0;
  int divisionentera = 0;
  std::cout<<"Digita un número entero: \n";
  std::cin>>numero;
  division = (numero+0.0)/2;
  divisionentera = numero/2;
  if (division == divisionentera)
    std::cout<<"El número "<<numero<<" es par \n";
  else
    std::cout<<"El número "<<numero<<" es impar \n";
  return 0;
}
