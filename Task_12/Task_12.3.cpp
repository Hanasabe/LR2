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

double cbrt(double x) {
    if (x == 0) return 0;
    double g = x;
    double ng = x + 1;;
    while (std::abs(ng - g) > 1e-10) {
        ng = (2 * g + x / (g * g)) / 3;
        g = ng;
    } return ng; }

int main() 
{

double p, q, z1, z2, w1, w2, x;

std::cout << "Введите p и q: ";
std::cin >> p >> q;

    double D = q * q + 4 * ((p * p * p) / 27);
    if (D >= 0) {
        z1 = (-q + sqrt(D)) / 2;
        z2 = (-q - sqrt(D)) / 2;

    w1 = cbrt(z1);
    w2 = cbrt(z2);
    double x = w1 + w2;

 std::cout << "Корень уравнения равен: " << x << std::endl;
    } 
    else
       std::cout << "Уравнение не имеет корней" << std::endl;

  return 0;
}
