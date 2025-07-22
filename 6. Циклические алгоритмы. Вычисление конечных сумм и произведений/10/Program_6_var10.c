//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №10: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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

    double root_n = pow(x, 1.0 / n) + 1.0/9.0;
    double prod = 1.0;

    for (int k = 1; k <= n; ++k) {
        double inner = pow(x, (k - 1) / 2.0);
        prod *= exp(inner) + sqrt(x) - 1.0;
    }

    double result = root_n - prod;
    printf("Результат: %lf\n", result);
    return 0;
}