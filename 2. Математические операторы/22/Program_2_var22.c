//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №22 (условие смотрите в сборнике).
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

    result = 1.0 / sqrt(x) + pow(log(fabs(0.2 + sin(x))), 2) * pow(x, 2.0 / 3.0);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}