/* Este código le pide al usuario que digite el signo de una operación (+, -, *, /) seguido de dos valores e imprime el resultado */

#include <iostream>
#include <string>
using namespace std;
int main()

{
  double a = 0;
  double b = 0;
  double resultsuma = 0;
  double resultresta = 0;
  double resultmult = 0;
  double resultdivi = 0;
  string operacion;
  std::cout<<"Introduzca el signo de la operación (+, -, * o /): \n";
  std::cin>>operacion;
  std::cout<<"Introduzca el primer valor: \n";
  std::cin>>a;
  std::cout<<"Introduzca el segundo valor: \n";
  std::cin >>b;
  resultsuma = a + b;
  resultresta = a - b;
  resultmult = a * b;
  resultdivi = (a + 0.0) / b;
  if(operacion == "+")
    std::cout<<"El resultado de la operación es: "<< a<<" + "<< b<<"  =  "<<resultsuma<\
      <"\n";
  else if(operacion == "-")
    std::cout<<"El resultado de la operación es: "<<a<<"  - "<<b<<"  =  "<<resultresta<\
      <"\n";
  else if(operacion == "*")
    std::cout<<"El resultado de la operación es: "<<a<<" * "<<b<<"  =  "<<resultmult<<"\
\n";
  else if(operacion == "/")
    {
      if(b == 0)
	std::cout<<"Error, b ≠ 0 \n";
      else
	std::cout<<"El resultado de la operación es: "<<a<<"/"<<b<<"  =  "<<resultdivi<\
	  <"\n";
    }
  else
    std::cout<<"Error, digitar un símbolo válido \n";
  return 0;
}
