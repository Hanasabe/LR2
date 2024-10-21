#include <iostream>
int main ()
{
     long double X, Y, M;
     std::cout << "Введите Х: ";
     std::cin >> X;
     std::cout << "Введите Y: ";
     std::cin >> Y;
     M = (X > Y) ? X : Y;
     std::cout << "Наибольшее число: " << M << std::endl;
     return 0;
}
