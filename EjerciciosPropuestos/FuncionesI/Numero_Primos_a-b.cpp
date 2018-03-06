/* Este codigo le pide al usuario dos números enteros e imprime la cantidad de número primos entre ellos*/

#include<iostream>
#include<math.h>

int NPrimos (int a, int b)
{
  int N = a;
  int NPrim = 0;
  int NDiv = 0;
  int Div = 0;
  for(N = a; N <= b; ++N)
    {
      NDiv = 0;
      for (Div = 1; Div <= fabs(N); ++Div)
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
  int a = 0;
  int b = 0;
  std::cout<<"Ingrese dos número enteros, de menor a mayor y separados por espacio\n";
  std::cin>>a>>b;
  std::cout<<"Hay "<<NPrimos(a, b)<<" números primos entre "<<a<<" y "<<b<<"\n";
  return 0;
}
