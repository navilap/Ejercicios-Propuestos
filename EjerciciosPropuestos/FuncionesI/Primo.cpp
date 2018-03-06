/* Este código pide al usuaario digitar un número entero e imprime si es primo o no */

#include <iostream>

int Primo (int x)
{
  int ndiv = 0;
  int divi = 0;
  int z = 0;
  for(divi = 1; divi <= x; ++divi)
    {
      if(x % divi == 0)
        {
          ++ndiv;
        }
    }
  if(ndiv <= 2)
    {
      z = 1;
    }
  else
    {
      z = 0;
    }
  return z;
}

int main()
{
  int x = 0;
  std::cout<<"Ingrese un valor entero \n";
  std::cin>>x;
  if (Primo(x) == 1)
    {
      std::cout<<"El número "<<x<<" es primo \n";
    }
  else
    std::cout<<"El número "<<x<<" no es primo \n";
  return 0;
}
