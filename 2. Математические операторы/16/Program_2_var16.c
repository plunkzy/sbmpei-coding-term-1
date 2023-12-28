//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №16 (условие смотрите в сборнике).
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x, result;
    printf("Введите x: ");
    scanf("%lf", &x);

    result = sqrt(pow(M_E, 2*x) * sqrt(x) - (x + 1.0 / 3.0) / x) * fabs(cos(2.5 * x));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}