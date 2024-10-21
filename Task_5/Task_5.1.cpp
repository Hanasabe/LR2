#include <iostream>
int main ()
{
     long double X, Y;
     std::cout << "Введите Х: ";
     std::cin >> X;
     std::cout << "Введите Y: ";
     std::cin >> Y;
     bool max = X > Y;
     if (max == 1) std::cout << "Наибольшее число: " << X << std::endl;
     else std::cout << "Наибольшее число: " << Y << std::endl;
     return 0;
}
