//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №14 (условие смотрите в сборнике).
// Опубликовано 11.12.2023
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

    result = (sqrt(pow(sin(x / 2), 3)) + pow(pow(M_E, 1.3*x) + pow(M_E, -1.3*x), 1.0 / 3.0)) / (fabs(x - 7.0 / 9.0));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}