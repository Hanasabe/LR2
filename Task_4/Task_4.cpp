#include <iostream>
int main() {
  long long int X, Y;
  long double A, B, C, K;
  std::cout << "Введите X, Y, A, B, C, K: " << std::endl;
  std::cin >> X >> Y >> A >> B >> C >> K;
  if (X == Y) {
    X = 0;
    Y = 0;
  }
  else if (X < Y) 
    X = 0;
  else 
    Y = 0;
  if (A >= B && A >= C) 
    A -= K; 
  if (B >= A && B >= C) 
    B -= K;
  if (C >= A && C >= B)
    C -= K;
  std::cout << "Значение X: " << X << " Значение Y: " << Y << std::endl;
  std::cout << "Значение A: " << A << " Значение B: " << B << " Значение C: " << C << std::endl;
}