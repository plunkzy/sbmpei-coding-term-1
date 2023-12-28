//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №18 (условие смотрите в сборнике).
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

    result = pow(x, 3) / pow (x, 1.0 / 3.0) - exp(x) * log(fabs(pow(1.37, 3) + pow (x, 3))) + 4.0 / 3.0;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}