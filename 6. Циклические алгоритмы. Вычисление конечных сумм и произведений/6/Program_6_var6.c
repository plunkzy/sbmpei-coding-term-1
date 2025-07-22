//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №6: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double prod = 1.0;
    for (int k = 1; k <= n; ++k) {
        double num = k * log(x) + 3.0/7.0;
        double den = pow(exp((k - 1) * x), 1.0 / k);
        prod *= num / den;
    }

    double result = sqrt(fabs(x)) - prod + 1.0;
    printf("Результат: %lf\n", result);
    return 0;
}