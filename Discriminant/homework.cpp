#include "Homework.h"
#include <iostream>
#include <cmath>
void Discriminant::Numbers::get_numbers(double* x_one,double* x_two)
{
    double disc=b*b-4.0*a*c;
    (*x_one)=(-b + sqrt(disc))/2*a;
    (*x_two)=(-b - sqrt(disc))/2*a;
    return;
}
void Discriminant::Numbers::set_numbers(double a, double b, double c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}





