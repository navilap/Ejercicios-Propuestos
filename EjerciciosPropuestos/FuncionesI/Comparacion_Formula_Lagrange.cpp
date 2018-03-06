/* Este código le pide al usuario que digite un número entero mayor que cero e imprime la cantidd de número primos menores o iguales a dicho número. Además, compara dicho valor con la famosa Fórmula de Lagrange */

#include <iostream>
#include<math.h>

double Lagrange (double x)
{
  double NPrim = 0;
  NPrim = x/(log (x)-1.08366) ;
  return NPrim;
}

int NPrimos (int x)
{
  int N = 0;
  int NPrim = 0;
  int NDiv = 0;
  int Div = 0;
  for(N = 1; N <= x; ++N)
    {
      NDiv = 0;
      for (Div = 1; Div <= N; ++Div)
        {
          if(N % Div == 0)
            {
              ++NDiv;
            }
        }
      if (NDiv == 2)
        {
          ++NPrim;
        }
    }
  return NPrim;
}

int main()
{
  int x = 0;
  std::cout<<"Ingrese un entero mayor a 0 \n";
  std::cin>>x;
  std::cout<<"Número de primos menores o iguales a "<<x<<" = "<<NPrimos(x)<<"\n";
  std::cout<<"FórmulaDeLagrange("<<x<<") = "<<Lagrange(x)<<"\n";
  return 0;
}
