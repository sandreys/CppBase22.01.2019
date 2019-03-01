#include <iostream>
#include <cstring> 
bool check_polindrom(std::string word)
{
    int len = word.length();

    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
     }
            return true;
}

int main()



{

        while(1){


    std::string str;
    std:: cout << "Введите слово: ";
    std:: cin >> str;
    if(check_polindrom(str))
    {
        std::cout << "Палиндром"<<std::endl;
    }
    else
    {
        std::cout << "Не палиндром"<<std::endl;
    }

   std::cout << "Выполдлнить програму еще раз(Y/N)?";
          char c;
          std::cin >> c;
            if(c == 'Y')
                 continue;
              else if(c == 'N')
                 break;

    }
    return 0;
}
