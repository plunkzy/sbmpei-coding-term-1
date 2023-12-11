//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №9 (условие смотрите в сборнике).
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

    result = (fabs(sin(sqrt(10.5 * x)))) / (pow(x, 2.0 / 3.0) - 0.143) + 2 * M_PI * x;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}