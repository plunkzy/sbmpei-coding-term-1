//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №12: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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

    double part1 = n * exp(x);
    double prod = 1.0;

    for (int k = 1; k <= n; ++k) {
        double numer = fabs(cos(sqrt(x))) + log(x);
        double denom = cbrt(x * x) + 1.0/3.0;
        prod *= numer / denom;
    }

    double result = part1 + prod;
    printf("Результат: %lf\n", result);
    return 0;
}