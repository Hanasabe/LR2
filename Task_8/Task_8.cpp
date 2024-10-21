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


long double factorial(long double x) 
{
    long double result = 1;
    for (int i = 1; i <= x; i++) {
    result *= i;
    }
    return result;
}

double step(double x, double y) 
{
    double result = 1;
    for (int i = 1; i <= y; i++) {
    result *= x;
    }
    return result;
}

double sign(double x) {
  if (x > 0) {
    return 1;
  } else if (x < 0) {
    return -1;
  } else {
    return 0;
  }
}

long double Pi = 3.14159265358980;

 inline long double sin(long double x) {
    while (fabs(x) >= 2 * Pi) {
    x -= sign(x) * 2 * Pi;
  }
    long double sinx = 0, term = 0;
    for(int i = 1; i <= 20; i++) {
        sinx +=  (step(-1, i - 1) * step(x, (2 * i - 1))) / factorial(2 * i - 1);
    }
    return sinx;  }

    long double cos(long double x){
    return sqrt(1 - sin(x) * sin(x));
    }
    
double arccos(double x) {
    double y = Pi / 2;
    double yn;
    int i = 0;

    while (fabs(yn - y) > 1e-7) {
        yn = y - (cos(y) - x) / (-sin(y));
        y = yn;
        i++;
    }

    return yn;
}

int main () 
{

double x1, y1, x2, y2, x3, y3;
std::cout << "Введите координаты вершин треугольника (x1, y1, x2, y2, x3, y3): ";
std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

     double r1 = sqrt((x2 - x1) * (x2 - x1) +(y2 - y1) * (y2 - y1));
     double r2 = sqrt((x3 - x2) * (x3 - x2) +(y3 - y2) * (y3 - y2));
     double r3 = sqrt((x3 - x1) * (x3 - x1) +(y3 - y1) * (y3 - y1));
     
     double xm1 = (x2 + x1) / 2;
     double ym1 = (y2 + y1) / 2;
     double m1 = sqrt((x3 - xm1) * (x3 - xm1) + (y3 - ym1) * (y3 - ym1));
     double xm2 = (x3 + x2) / 2;
     double ym2 = (y3 + y2) / 2;
     double m2 = sqrt((x1 - xm2) * (x1 - xm2) + (y1 - ym2) * (y1 - ym2));
     double xm3 = (x3 + x1) / 2;
     double ym3 = (y3 + y1) / 2;
     double m3 = sqrt((x2 - xm3) * (x2 - xm3) + (y2 - ym3) * (y2 - ym3));

     double P = r1 + r2 + r3;
     double p = P / 2;
     double S1 = sqrt(p * (p - r1) * (p - r2) * (p - r3));

     double h1 = (2 * S1) / r1;
     double h2 = (2 * S1) / r2;
     double h3 = (2 * S1) / r3;

     double q = r2 / r3;
     double xb1 =  (x2 + q * x1) / (1 + q);
     double yb1 =  (y2 + q * y1) / (1 + q);
     double b1 = sqrt((xb1 - x3) * (xb1 - x3) + (yb1 - y3) * (yb1 - y3));

     q = r1 / r3;
     double xb2 =  (x2 + q * x3) / (1 + q);
     double yb2 =  (y2 + q * y3) / (1 + q);
     double b2 = sqrt((xb2 - x1) * (xb2 - x1) + (yb2 - y1) * (yb2 - y1));

     q = r1 / r2;
     double xb3 =  (x1 + q * x3) / (1 + q);
     double yb3 =  (y1 + q * y3) / (1 + q);
     double b3 = sqrt((xb3 - x2) * (xb3 - x2) + (yb3 - y2) * (yb3 - y2));

     double cosa1 = (r1 * r1 + r3 * r3 - r2 * r2) / (2 * r1 * r3);
     double a1 = arccos(cosa1);
     double ga1 = a1 * (180 / Pi);

     double cosa2 = (r1 * r1 + r2 * r2 - r3 * r3) / (2 * r1 * r2);
     double a2 = arccos(cosa2);
     double ga2 = a2 * (180 / Pi);

     double cosa3 = (r2 * r2 + r3 * r3 - r1 * r1) / (2 * r2 * r3);
     double a3 = arccos(cosa3);
     double ga3 = a3 * (180 / Pi);

     double r = S1 / p;
     double R = (r1 * r2 * r3) / (4 * r * p);

     double Cr = 2 * Pi * r;
     double Sr = Pi * r * r;
     double CR = 2 * Pi * R;
     double SR = Pi * R * R;

     S1 = sqrt(p * (p - r1) * (p - r2) * (p - r3));
     double S2 = (r1 * h1) / 2;
     double S3 = 0.5 * r1 * r3 * sin(a1);

std::cout << "Длины сторон треугольника: " << r1 << ", " << r2 << ", " << r3 << std::endl;
std::cout << "Длины высот треугольника: " << h1 << ", " << h2 << ", " << h3 << std::endl;
std::cout << "Длины медиан треугольника: " << m1 << ", " << m2 << ", " << m3 << std::endl;
std::cout << "Длины биссектрис треугольника: " << b1 << ", " << b2 << ", " << b3 << std::endl;
std::cout << "Углы треугольника (в радианах): " << a1 << ", " << a2 << ", " << a3 << std::endl;
std::cout << "Углы треугольника (в градусах): " << ga1 << "°, " << ga2 << "°, " << ga3 << "°" << std::endl;
std::cout << "Радиус вписанной окружности: " << r << std::endl;
std::cout << "Радиус описанной окружности: " << R << std::endl;
std::cout << "Площадь вписанной окружности: " << Sr << std::endl;
std::cout << "Длина вписанной окружности: " << Cr << std::endl;
std::cout << "Площадь описанной окружности: " << SR << std::endl;
std::cout << "Длина описанной окружности: " << CR << std::endl;
std::cout << "Площадь треугольника(по первому способу): " << S1 << std::endl;
std::cout << "Площадь треугольника(по второму способу): " << S2 << std::endl;
std::cout << "Площадь треугольника(по третьему способу): " << S3 << std::endl;
std::cout << "Периметр треугольника: " << P << std::endl;
    
     return 0;

}