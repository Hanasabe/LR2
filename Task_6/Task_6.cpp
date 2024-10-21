//10
#include <iostream>
#include <cmath>

int main () {

     double x, k, z, D, C;

     std::cout << "Введите x: ";
     std::cin >> x;
     std::cout << "Введите k: ";
     std::cin >> k;
     std::cout << "Введите z: ";
     std::cin >> z;
     std::cout << "Введите D: ";
     std::cin >> D;
     std::cout << "Введите C: ";
     std::cin >> C;

     double A = log(x) - k;
     double B = sqrt(z);
     double Y = pow(D, 2) + (pow(C, 2) / 0.75 * A) + B;
     
     std::cout << "Y = " << Y << std::endl;

     return 0;

}
