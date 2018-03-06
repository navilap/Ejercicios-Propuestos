/* Este código le pide al usuario que digite por separado cuántos pennies (monedas de 1 centavo), nickels (monedas de 5 centavos), quarters (monedas de 25 centavos), half dollars (monedas de 50 centavos) y monedas de un dolar (monedas de 100 centavos) tiene e imprime la cantidad equivalente en centavos */
#include <iostream>
int main()
{
  int pennies = 0;
  int nickels = 0;
  int dimes = 0;
  int quarters = 0;
  int half_dollars = 0;
  int one_dollar = 0;
  int centavos = 0;
  double dolares = 0;
  std::cout<<"¿Cuántas monedas de 1 centavo tienes? \n";
  std::cin>>pennies;
  std::cout<<"¿Cuántas monedas de 5 centavos tienes? \n";
  std::cin>>nickels;
  std::cout<<"¿Cuántas monedas de 10 centavos tienes? \n";
  std::cin>>dimes;
  std::cout<<"¿Cuántas monedas de 25 centavos tienes? \n";
  std::cin>>quarters;
  std::cout<<"¿Cuántas monedas de 50 centavos tienes? \n";
  std::cin>>half_dollars;
  std::cout<<"¿Cuántos monedas de 1 dolar tienes? \n";
  std::cin>>one_dollar;
  centavos = pennies + 5*nickels + 10*dimes + 25*quarters + 50*half_dollars + 1\
    00*one_dollar;
  dolares = (centavos + 0.0)/100;
  if(pennies==1)
    std::cout<<"Tienes "<<pennies<<" pennie \n";
  else
    std::cout<<"Tienes "<<pennies<<" pennies \n";
  if(nickels==1)
    std::cout<<"Tienes "<<nickels<<" nickel \n";
  else
    std::cout<<"Tienes "<<nickels<<" nickels \n";
  if(dimes==1)
    std::cout<<"Tienes "<<dimes<<" dime \n";
  else
    std::cout<<"Tienes "<<dimes<<" dimes \n";
  if(quarters==1)
    std::cout<<"Tienes "<<quarters<<" quarter \n";
  else
    std::cout<<"Tienes "<<quarters<<" quarters \n";
  if(half_dollars==1)
    std::cout<<"Tienes "<<half_dollars<<" half-dollar \n";
  else
    std::cout<<"Tienes "<<half_dollars<<" half-dollars \n";
  if(one_dollar==1)
    std::cout<<"Tienes "<<one_dollar<<" one-dollar coin \n";
  else
    std::cout<<"Tienes "<<one_dollar<<" one-dollar coins \n";
  if(dolares==1)
    std::cout<<"Tienes un total de "<<dolares<<" dolar \n";
  else
    std::cout<<"Tienes un total de "<<dolares<<" dolares \n";
  if(centavos==1)
    std::cout<<"Tienes un total de "<<centavos<<" centavo \n";
  else
    std::cout<<"Tienes un total de "<<centavos<<" centavos \n";
  return 0;
}
