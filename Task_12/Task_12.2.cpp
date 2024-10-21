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

    double a, b, c, y1, y2, x1, x2, x3, x4;
    std::cout << "Введите коэффициенты a, b и c для уравнения ax^4 + bx^3 + cx^2 + bx + a = 0: ";
    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * (c - 2 * a);
    if (D >= 0) {
        y1 = (-b + sqrt(D)) / (2 * a);
        y2 = (-b - sqrt(D)) / (2 * a);

        double D1 = y1 * y1 - 4;
        double D2 = y2 * y2 - 4;
        std::cout << "Корни уравнения: "<< std::endl;


    if (D1 >= 0) {
        x1 = (-b + sqrt(D1)) / 2;
        x2 = (-b - sqrt(D1)) / 2;
        std::cout << x1 << std::endl << x2 << std::endl;
    } 
    if (D2 >= 0) {
        x3 = (-b + sqrt(D2)) / 2;
        x4 = (-b - sqrt(D2)) / 2;
         std::cout << x3 << std::endl << x4 << std::endl;
    } }
     else {
        std::cout << "Нет корней" << std::endl;
    } 

    return 0;
}
