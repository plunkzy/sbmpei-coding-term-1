//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №11: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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

    double factor = fabs(atan(x));
    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        double numer = pow(x, 2 * k - 1);
        double denom = sqrt(exp(x / k)) + pow(x, (k - 1) / (double)k);
        sum += numer / denom;
    }

    double result = factor * sum;
    printf("Результат: %lf\n", result);
    return 0;
}