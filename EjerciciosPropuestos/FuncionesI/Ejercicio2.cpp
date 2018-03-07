/* A un trabajador le pagan según sus horas trabajadas y la tarifa está a un valor por hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 50% para las horas extras. Calcular el salario del trabajador dadas las horas trabajadas y la tarifa */

#include<iostream>

double Sueldo(double tarifa, int horas_trabajadas)
{
  double sueldo = 0;
  if(horas_trabajadas > 40)
    {
      sueldo = (tarifa * 40) + (1.5 * tarifa * (horas_trabajadas - 40));
    }
  else
    sueldo = tarifa * horas_trabajadas;
  return sueldo;
}

int main()
{
  double tarifa = 0;
  int horas_trabajadas = 0;
  std::cout<<"Ingrese la tarifa por hora y las horas trabajadas, separadas por espacio \n";
  std::cin>>tarifa>>horas_trabajadas;
  std::cout<<"El sueldo para "<<horas_trabajadas<<" horas trabajadas, con la tarifa "<<tarifa<<" es de "<<Sueldo(tarifa, horas_trabajadas)<<"\n";
  return 0;
} 

