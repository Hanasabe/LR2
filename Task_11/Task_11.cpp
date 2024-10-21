#include <iostream>
int main () 
{

     int h1, min1, h2, min2, h, min;
     std::cout << "Во сколько студент начал решать задачи: ";
     std::cin >> h1 >> min1;
     std::cout << "Во сколько студент закончил решать задачи: ";
     std::cin >> h2 >> min2;
     if (h1 > 23 || h1 < 0 || h2 > 23 || h2 < 0 || min1 > 60 || min1 < 0 || min2 > 60 || min2 < 0)
    {
     std::cout << "Неверное время" << std::endl;
    }
     else {
     if (h2 >= h1)
     h = h2 - h1;
     else 
        h = (24 - h1) + h2;
     if (min2 >= min1)
     min = min2 - min1;
     else 
        min = (60 - min1) + min2;
    std::cout << "Студент решал задачи " << h << " ч. и " << min << " мин." << std::endl;
     }
return 0;

}