#include "exponentiation.h"
#include <iostream>
#include <cmath>

float Exponentiation::exponentiation(float a,float power)
{
    if(a == 0 && power < 0 ) exit(-1);
    return pow (a,power);
}
