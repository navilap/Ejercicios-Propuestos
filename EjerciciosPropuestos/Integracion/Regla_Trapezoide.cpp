/* Este código calcula la integral númerica de un función func desde a hasta b \
   usando la regla del trapecio */

#include <iostream>
#include <cmath>

double func (double);
double Trapezoide_Uniforme (double a, double b, int n);

int main()
{
  double a = 0;
  double b = 2;
  int n = 100000;
  std::cout<<"f(0) = "<<func(0)<<"\n";
  std::cout<<"Trapezoide Regular (n = 10) = "<<Trapezoide_Uniforme (a, b, 10)<<"\n";
  std::cout<<"Trapezoide Regular (n = 100) = "<<Trapezoide_Uniforme (a, b, 100)<<"\n";
  std::cout<<"Trapezoide Regular (n = 1000) = "<<Trapezoide_Uniforme (a, b, 1000)<<"\n";
  std::cout<<"Trapezoide Regular (n = 10000) = "<<Trapezoide_Uniforme (a, b, 10000)<<"\n";
  std::cout<<"Trapezoide Regular (n = 100000) = "<<Trapezoide_Uniforme (a, b, 100000)<<"\n";
  std::cout<<"Trapezoide Regular (n = "<<n<<") = "<<Trapezoide_Uniforme (a, b, n)<<"\n";
  return 0;
}

double func(double x)
{
  double f = exp(-pow(cos(x), 2));
  return f;
}

double Trapezoide_Uniforme (double a, double b, int n)
{
  double integral = 0.5*(func(a) + func(b));
  double h = (b-a)/(n + 0.0);
  for(int i = 1; i <= n - 1; ++i)
    {
      integral += func(a + i*h);
    }
  return h* integral;
}
