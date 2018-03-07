/* A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000, por encima de 1000 y hasta 2000 el 5% del adicional, y por encima de 2000 el 3% del adicional. Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo */

#include <iostream>

int main()
{
  double sueldo = 0;
  double descuento_neto = 0;
  double sueldo_neto = 0;
  std::cout<<"Ingrese el sueldo recibido por el trabajador \n";
  std::cin>> sueldo;
  if(sueldo <= 1000)
    {
      descuento_neto = 0.1 * sueldo;
    }
  else 
    {
      if(sueldo <= 2000)
	{
	  descuento_neto = (sueldo - 1000) * 0.05;
	}
      else
	descuento_neto = (sueldo - 2000) * 0.03;
    } 
  sueldo_neto = sueldo - descuento_neto;
  std::cout<<"El descuento neto fue de "<<descuento_neto<<" y el sueldo neto de "<<sueldo_neto<<"\n";
  return 0;
}
