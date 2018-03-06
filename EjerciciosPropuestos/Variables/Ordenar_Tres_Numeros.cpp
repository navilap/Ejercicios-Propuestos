/* Este código le pide al usuario ingresar tres enteros y los organiza en secuancia d emenor a mayor */

#include <iostream>
int main ()
{
  double  a = 0;
  double b = 0;
  double c = 0 ;
  std::cout<<"Ingresa el primer valor entero: \n";
  std::cin>>a;
  std::cout<<"Ingresa el segundo valor entero \n";
  std::cin>>b;
  std::cout<<"Ingresa el tercero valor entero \n";
  std::cin>>c;
  if(a<b)
    {
      if(a<c)
        {
          if (b<c)
	    std::cout<<"La secuencia ascendente de los números es: "<<a<<", "<<b<<", "<<c<<"\n";
	  else
	    std::cout<<"La secuencia ascendente de los números es: " <<a<<", "<<c<<", "<<b<<"\n";
        }
    }
  else
    {
      if(b<c)
        {
          if (a<c)
	    std::cout<<"La secuencia ascendente de los números es: "<<b<<", "<<a<<", "<<c<<"\n";
          else
	    std::cout<<"La secuencia ascendente de los números es: "<<b<<", "<<c<<", "z<a<<"\n";
        }
    }
  if(c<a)
    {
      if(c<b)
        {
          if(a<b)
	    std::cout<<"La secuencia ascendente de los números es: "<<c<<", "<<a<<", "<<b<<"\n";
          else
	    std::cout<<"La secuencia ascendente de los números es: "<<c<<", "<<b<<", "<<a<<"\n";
        }
    }

  return 0;
