//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №5: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double coef = x * x + cbrt(x);
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double term = pow(x, k - 1);
        double denom = fabs(log(k * x * x)) + 2.0/3.0;
        sum += term / denom;
    }

    double result = coef * sum;
    printf("Результат: %lf\n", result);
    return 0;
}