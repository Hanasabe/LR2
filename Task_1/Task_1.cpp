#include <iostream>

int main()
{
	 double x;

	 std::cout << "Введите x: ";
	 std::cin >> x;

	 double a = 23 * x * x;
 	 double b = 3 * a + 8;
	 double c = x * (a + 32);

	 std::cout << "23х^3 + 69x^2 + 32x + 8 = " << b + c << std::endl << "-23х^3 + 69x^2 - 32x + 8 = " << b - c << std::endl;
	 return 0;
}
