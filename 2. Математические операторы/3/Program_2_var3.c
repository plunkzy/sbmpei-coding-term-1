//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №3 (условие смотрите в сборнике).
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

    result = (1.0 / 7.0 + log(sqrt(x))) * pow(M_E, sqrt(x-2));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}