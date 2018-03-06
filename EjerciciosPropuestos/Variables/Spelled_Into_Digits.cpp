/* Este código le pide al usuario escribir con letras un número entero y si dicho número corresponde 0, 1,2,3 o 4, imprime el digito correspondiente */

#include<iostream>
#include<string>
using namespace std;
int main()

{
  string spelled_out_number;
  string cero = "Cero";
  string uno = "Uno";
  string dos = "Dos";
  string tres = "Tres";
  string cuatro = "Cuatro";
  std::cout<<"Escribe en letras un número con la primera en mayúscula: \n";
  std::cin>> spelled_out_number;
  if(spelled_out_number == cero)
    std::cout <<"El valor de "<<spelled_out_number<<" es 0 \n";
  else if(spelled_out_number == uno)
    std::cout <<"El valor de "<<spelled_out_number<<" es 1 \n";
  else if(spelled_out_number == dos)
    std::cout <<"El valor de "<<spelled_out_number<<" es 2 \n";
  else if(spelled_out_number == tres)
    std::cout <<"El valor de "<<spelled_out_number<<" es 3 \n";
  else if(spelled_out_number == cuatro)
    std::cout <<"El valor de "<<spelled_out_number<<" es 4 \n";
  else
    std::cout<<"¡Computador estúpido! \n";
  return 0;
}
