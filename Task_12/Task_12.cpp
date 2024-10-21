#include <iostream>

double fabs(double x) {
    return x>=0 ? x : -x;
}
 
double sqrt(double x) {
    const double eps = 1e-15;
    double result = x;
    double xn = 0;
    while (fabs(result - xn) > eps) {
        xn = result;
        result = (xn + x / xn) / 2;
    } 
    return result;
}

int main()
{

    double a, b, c, y1, y2, D;
    std::cout << "Введите коэффициенты a, b и c для уравнения ax^4 + bx^2 + c = 0: ";
    std::cin >> a >> b >> c;

    D = b * b - 4 * a * c;
    if (D >= 0) {
        y1 = (-b + sqrt(D)) / (2 * a);
        y2 = (-b - sqrt(D)) / (2 * a);
    } else {
        y1 = -1;
        y2 = -1;
    }

    if (y1 == -1 && y2 == -1) {
        std::cout << "Уравнение не имеет реальных корней." << std::endl;
    }
     else {    if (y1 <0 && y2 < 0) {
         std::cout << "Уравнение не имеет реальных корней." << std::endl;

    } else {
        std::cout << "Корни уравнения:" << std::endl;
        if (y1 >= 0) {
            std::cout << sqrt(y1) << std::endl;
            std::cout << -sqrt(y1) << std::endl;
        }
        if (y2 >= 0) {
            std::cout << sqrt(y2) << std::endl;
            std::cout << -sqrt(y2) << std::endl;
        }
        if (y1 <0 && y2 < 0) {
         std::cout << "Уравнение не имеет реальных корней." << std::endl;


        } }
    } 

    return 0;
}
