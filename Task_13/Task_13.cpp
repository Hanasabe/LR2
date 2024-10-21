#include <iostream>
int main()
{

    int a, i;
    int b;
    int *p = &a;
    int *q = &b;
    std::cout << "Содержимое ячейки А до первого шага = " << *p << " | Содержимое ячейки Б до первого шага = " << *q << std::endl;
    std::cout << "Введите числа a и b ( целые положительные ): ";
    std::cin >> a >> b;
    std::cout << "Адрес A = " << p << " | Адрес B = " << q << std::endl;
    std::cout << "Содержимое ячейки А на 1 шаге = " << *p << " | Содержимое ячейки B на 1 шаге = " << *q << std::endl;
    i = 2;
        while (a != b) 
        {
        if (a > b) 
        a = a - b; 
        else  
        b = b - a; 
        p = &a;
        q = &b;
        std::cout << "Cодержимое ячейки А на " << i << " шаге = " << *p << " | Cодержимое ячейки Б на " << i << " шаге = " << *q << std::endl;
        i++;
        }
    std::cout << "Нод чисел a и b равен " << a << std::endl;
    return 0;

}