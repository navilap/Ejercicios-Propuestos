/* Este código calcula la integral númerica de la función func entre a y b usan\
   do la regla de Simpson */

#include <iostream>
#include <cmath>

double func (double x);
double Simpson_Regular (double a, double b, int n);

int main()
{
  double a = 0;
  double b = 1;
  int n = 10000;
  std::cout<<"Simpson_Regular (n = 10) = "<<Simpson_Regular(a, b, 10)<<"\n";
  std::cout<<"Simpson_Regular (n = 100) = "<<Simpson_Regular(a, b, 100)<<"\n";
  std::cout<<"Simpson_Regular (n = 1000) = "<<Simpson_Regular(a, b, 1000)<<"\n";
  std::cout<<"Simpson_Regular (n = 10000) = "<<Simpson_Regular(a, b, 10000)<<"\n";
  std::cout<<"Simpson_Regular (n = 100000) = "<<Simpson_Regular(a, b, 100000)<<"\n";
  std::cout<<"Simpson_Regular (n = "<<n<<") = "<<Simpson_Regular(a, b, n)<<"\n";
  return 0;
}

double func (double x)
{
  double f = 0;
  f = 1/(1 + 10 * pow(x, 2) + 0.0);
  return f;
}

double Simpson_Regular (double a, double b, int n)
{
  double suma0 = (func(a) + func(b));
  double h = (b - a)/(n + 0.0);
  double suma1 = 0;
  double suma2 = 0;
  for(int i = 1; i <= 0.5 * n; ++i)
    {
      suma1 += func(a + (2*i - 1) * h);
    }
  for (int i = 1; i <= 0.5 * n - 1; ++i)
    {
      suma2 += func(a+ 2 * i * h);
    }      
  return (h/(3 + 0.0)) * (suma0 + 4 * suma1 + 2 * suma2);
}
