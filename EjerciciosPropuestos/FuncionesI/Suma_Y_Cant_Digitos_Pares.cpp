/* Este código le pide al usario ingresar un número entero mayor que cero e imprime la cantidad y suma de sus dígitos pares */

#include <iostream>

int Suma_Digitos_Pares (int Num)
{
  int digito = 0;
  int suma = 0;
  for(int x = 0; Num > 0; ++x)
    {
      digito = (Num % 10);
      if (digito % 2 == 0)
        {
          suma += digito;
        }
      Num /= 10;
    }
  return suma;
}

int Cant_Digitos_Pares (int Num)
{
  int digito = 0;
  int cant = 0;
  for(int x = 0; Num > 0; ++x)
    {
      digito = (Num % 10);
      if (digito % 2 ==0)
        {
          ++cant;
        }
      Num /= 10;
    }
  return cant;
}

int main ()
{
  int Num = 0;
  std::cout<<"Ingrese un número entero mayor que cero \n";
  std::cin>> Num;
  std::cout<<Num<<" tiene "<<Cant_Digitos_Pares(Num)<<" dígitos pares, y su sum\
a es "<<Suma_Digitos_Pares(Num)<<"\n";
  return 0;
}
