/* Este código le pide al usuario ingresar un número entero mayor que cero e imprime la cantidad y la suma de sus dígitos */

#include <iostream>

int Suma_Digitos (int Num)
{
  int Suma_Digitos = 0;
  for(int NumD = 1; Num > 0; ++NumD)
    {
      Suma_Digitos += (Num % 10);
      Num /= 10;
    }
  return Suma_Digitos;
}

int Numero_Digitos (int Num)
{
  int Numero_Digitos = 0;
  for (int Numd = 1; Num > 0; ++Numd)
    {
      ++Numero_Digitos;
      Num /= 10;
    }
  return Numero_Digitos;
}

int main()
{
  int Num = 0;
  std::cout<<"Ingrese un número entero mayor que cero \n";
  std::cin >> Num;
  std::cout<<"El número "<<Num<<" tiene "<<Numero_Digitos(Num)<<" dígitos, y \
su suma es "<<Suma_Digitos(Num)<<"\n";
  return 0;
}
