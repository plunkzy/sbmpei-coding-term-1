//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №1: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
// Опубликовано 22.07.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    double x;

    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите x: ");
    scanf("%lf", &x);

    double pi = acos(-1.0);
    double norm = sqrt(n * pi);
    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        sum += (sin(k * x / 2.0) + sin((k * x - 1.0) / 2.0)) / exp(x - 1.0 / k);
    }

    double result = sum / norm;

    printf("Результат: %lf\n", result);
    return 0;
}