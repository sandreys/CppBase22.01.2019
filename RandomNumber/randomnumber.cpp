#include <iostream>
#include <time.h>
#include "randomnumber.h"

void RandomNumber::R_Number () {

    int answer {};

srand (time(NULL));

int Number =(10+rand()%11)+(((10 + rand()%11)* -1));

do {

    while(!(std::cin >> answer))
   {
       std::cin.clear();

   }
    if (Number < answer)
    {
        std::cout << "Номер меньше" << std::endl;
    }
    if (Number > answer)
    {
        std::cout << "Номер больше" <<std::endl;
    }
} while (Number != answer);

std::cout << "Грац" << std::endl;
}
