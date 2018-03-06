/* Este código le pide al usuario ingresar dos número enteros e imprime los números primos entre ellos */

#include<iostream>

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
  if(ndiv == 2)
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
  int a = 0;
  int b = 0;
  std::cout<<"Ingrese los limites inferior y superior, respectivamente, separados por espacio \n";
  std::cin>>a>>b;
  for(x = a; x <= b; ++x)
    {
      if(Primo(x) == 1)
        {
	  std::cout<<""<<x<<"\n";
        }
    }
  return 0;
}
