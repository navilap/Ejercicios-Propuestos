/* Este código le pide al usuario un número entero mayor que cero e imprime el valor del número e como sumatoria para ese valor */

#include <iostream>
#include <math.h>

int Fact (int Num)
{
  int fact = 1;
  if(Num == 0)
    {
      fact = 1;
    }
  else
    for (int x = Num; 1 <= x; --x)
      {
        fact *= x;
      }
  return fact;
}

double Sumae (int x)
{
  double sumae = 0;
  for(int y = 0; y <= x; ++y)
    {
      sumae += (1+0.0)/Fact(y);
    }
  return sumae;
}

int main ()
{
  int x = 0;
  std::cout<<"Ingrese un número para la sumatoria e \n";
  std::cin>>x;
  std::cout<<"El valor de e con la sumatoria 1/(x!) para x = "<<x<<" es "<<Sumae(x)<<"\n";
  return 0;
}
