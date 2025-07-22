//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №9: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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

    double factor = exp(sqrt(x / n));
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double numer = fabs(x - k) * sqrt(exp(1.0) * (k - 1));
        double denom = log(2.0 + pow(x, k) + pow(x, 2 * k + 1));
        sum += numer / denom;
    }

    double result = factor * sum;
    printf("Результат: %lf\n", result);
    return 0;
}