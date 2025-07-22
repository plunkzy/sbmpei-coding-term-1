//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №7: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double factor = log(x) - 2.0/9.0;
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double term = fabs(x - k) * cos(cbrt(k * x) / 2.0);
        sum += term;
    }

    double result = factor * sum;
    printf("Результат: %lf\n", result);
    return 0;
}