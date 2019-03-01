#include <exponentiation.h>
#include <exponentiation.cpp>
#include <iostream>
#include <cmath>

int main()
{
   float result=Exponentiation::exponentiation(2,4);
   std::cout << "2^4= "<< result<<std::endl;

   result=Exponentiation::exponentiation(2,-2);

   std:: cout << "2^(-2)= "<<result << std::endl;
}
