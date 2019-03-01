#include <iostream>
#include <iomanip>
#include "Homework.h"

int main()
{
  Discriminant::Numbers n;
  n.set_numbers(2,10,5);
  double x_1,x_2;
  n.get_numbers(&x_1,&x_2);
  std::cout<<"x1= "<<x_1<<", x2= "<< x_2;
  char ch;std::cin>>ch;
}

