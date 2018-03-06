/* Este código le pide al usuario ingrsar tres palabras cualquiera e imprime la lista ordenada de las palabras alfabéticamente */

#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string palabra1 = ".";
  string palabra2 = ".";
  string palabra3 = ".";
  std::cout << "Ingresa tres palabras separadas por espacio \n";
  std::cin >> palabra1 >> palabra2 >> palabra3;
  if(palabra1 < palabra2)
    {
      if (palabra1 < palabra3)
        {
          if (palabra2 < palabra3)
	    std::cout<<"Las palabras en orden alfabético son: "<<palabra1<<", "<<palabra2<<", "<<palabra3<<"\n";
          else
	    std::cout<<"Las palabras en orden alfabético son: "<<palabra1<<", "<<palabra3<<", "<<palabra2<<"\n";
        }
      else
	std::cout<<"Las palabras en orden alfabético son: "<<palabra3<<", " \
                 <<palabra1<<", "<<palabra2<<"\n";
    }
  else
    {
      if(palabra2 < palabra3)
        {
	  if (palabra1 < palabra3)
	    std::cout<<"Las palabras en orden alfabético son: "<<palabra2<<", "<<palabra1<<", "<<palabra3<<"\n";
          else
	    std::cout<<"Las palabras en orden alfabético son: "<<palabra2<<", "<<palabra3<<", "<<palabra1<<"\n";
        }
      else
	std::cout<<"Las palabras en orden alfabético son: "<<palabra3<<", "\
                 <<palabra2<<", "<<palabra1<<"\n";
    }
  return 0;
}
