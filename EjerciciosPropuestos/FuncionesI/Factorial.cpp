/* Este código le pide al usuario digitar un númer entero mayor o igual a 0 e imprime su factorial */

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

int main()
{
  int Num = 0;
  std::cout<<"Ingrese un entero mayor o igual a 0 \n";
  std::cin>>Num;
  std::cout<<Num<<"! = "<<Fact(Num)<<"\n";
  return 0;
}
