//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №27: "Даны катеты прямоугольного треугольника. Найти его гипотенузу."
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c;

    printf("Введите длину первого катета: ");
    scanf("%lf", &a);

    printf("Введите длину второго катета: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("Гипотенуза треугольника с катетами %.2lf и %.2lf равна %.2lf\n", a, b, c);

    return 0;
}