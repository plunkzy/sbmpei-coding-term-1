//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №6 (условие смотрите в сборнике).
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

    result = (sqrt(1 + pow(x, 2)) + (fabs(pow(log(x), 3))) / (1.6 + pow(x, 4))) * sin(7*x);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}