#include <iostream>
int main () 
{

     double a, b, c, Y;
     int N;
     std::cout << "Введите a(-13.8): ";
     std::cin >> a;
     std::cout << "Введите b(8.9): ";
     std::cin >> b;
     std::cout << "Введите c(25): ";
     std::cin >> c;
     std::cout << "Введите N(2, 56, 7, 3): ";
     std::cin >> N;
        switch (N) {
             case 2:
               Y = b * c - a * a;
               break;
             case 56:
               Y = b * c;
               break;
             case 7:
               Y = a * a + c;
               break;
             case 3:
               Y = a - b * c;
               break;
             default:
               Y = (a + b) * (a + b) * (a + b);
               break;
        }

std::cout << "Y = " << Y << std::endl;
return 0;

}