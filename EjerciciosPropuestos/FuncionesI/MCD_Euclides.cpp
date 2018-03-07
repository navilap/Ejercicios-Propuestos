/* Este código le pide al usuario digitar dos número entero e imprime su máximo cmún divisor, siguiendo el algoritmo de Euclides */

#include<iostream>

int MCD_Euclides (int a, int b)
{
  int c = 0;
  int d = 0;
  int e = 0;
  int MCD = 0;
  if(a > b)
    {
      c = a;
      d = b;
    }
  else
    {
      c = b;
      d = a;
    }
  e = c % d;
  while(e != 0)
    {
      c = d;
      d = e;
      e = c % d;
    }
  MCD = d;
  return MCD;
}
int main()
{
  int a = 0;
  int b = 0;
  std::cout<<"Ingrese dos valores enteros \n";
  std::cin>>a>>b;
  std::cout<<"El máximo común divisor de "<<a<<" y "<<b<<" es "<<MCD_Euclides(a, b)<<"\n";
  return 0;
}


