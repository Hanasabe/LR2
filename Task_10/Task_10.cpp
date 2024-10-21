#include <iostream>

double fabs(double x) {
    return x>=0 ? x : -x;
}
 
double sqrt(double x) {
    double result = x;
    double xn = 0;
    while (fabs(result - xn) > 1e-15) {
        xn = result;
        result = (xn + x / xn) / 2;
    } 
    return result;
}
int main() 
{

 
    double x1, y1, r, x2, y2, R, m;

    std::cout << "Введите координаты центра первого круга (x1, y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Введите радиус первого круга (r): ";
    std::cin >> r;

    std::cout << "Введите координаты центра второго круга (x2, y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Введите радиус второго круга (R): ";
    std::cin >> R;

    m = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if (m + r < R) {
        std::cout << "Да" << std::endl;
    } else if (m + R <= r) {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    } else if (m <= r + R) {
        std::cout << "Фигуры пересекаются" << std::endl;
    } else {
        std::cout << "Ни одно условие не выполнено" << std::endl;
    }

    return 0;


}