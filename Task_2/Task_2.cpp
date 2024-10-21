#include <iostream>
int main ()
 {

     int x, y, z;

     std::cout << "Введите х, y, z: ";
     std::cin >> x >> y >> z;

     if (x + y > z && x + z > y && z + y > x && x > 0 && y > 0 && z > 0) {
        std::cout << "Треугольник существует" << std::endl;
     }
     else 
     {
       std::cout << "Треугольник НЕ существует" << std::endl;
     }

     return 0;

}