#include <iostream>
#include <cmath>
int main ()
{
     double z, x, Y, a, b, fx1;
     int fx;
     std::cout << "Введите z: ";
     std::cin >> z;
     x = (z > 0) ? sqrt(z) : 3 * z + 1;
     std::cout << "Введите a: ";
     std::cin >> a;
     std::cout << "Введите b: ";
     std::cin >> b;
     std::cout << "Введите f(x)(Если f(x)=2x, введите 1, если f(x)=x^3, введите 2, если f(x)=x/3, введите 3): ";
     std::cin >> fx;
     switch (fx) {
        case 1:
        fx1 = 2 * x;
        Y = b * cos(a * fx1) + sin(x / 5) + (a * exp(x));
        if (z > 0) 
            std::cout << "При z>0(x=√z) и f(x)=2x, y=" << Y << std::endl;
        else 
            std::cout << "При z=<0(x=3z+1) и f(x)=2x, y=" << Y << std::endl;  
        break;

        case 2:
        fx1 = pow(x, 3);
        Y = b * cos(a * fx1) + sin(x / 5) + (a * exp(x));
        if (z > 0) 
            std::cout << "При z>0(x=√z) и f(x)=x^3, y=" << Y << std::endl;
        else 
            std::cout << "При z=<0(x=3z+1) и f(x)=x^3, y=" << Y << std::endl;  
        break;

        case 3:
        fx1 = x / 3;
        Y = b * cos(a * fx1) + sin(x / 5) + (a * exp(x));
        if (z > 0)
            std::cout << "При z>0(x=√z) и f(x)=x/3, y=" << Y << std::endl;
        else
            std::cout << "При z=<0(x=3z+1) и f(x)=x/3, y=" << Y << std::endl;  
        break;

        default:
            std::cout << "Выбор выходит за рамки возможных значений" << std::endl;
            break;
     }

return 0;

}