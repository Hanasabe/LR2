#include <iostream>
int main () 
{
     double d = 27.0;
     double q = (1.0 / (d + 1.0));
     double b1;

     std::cout << "Введите b1: ";
     std::cin >> b1;
     
     double S = (b1 / (1.0 - q));

     std::cout << "Сумма бесконечно убывающей геометрической прогресии: " << S << std::endl;
     return 0;
} 