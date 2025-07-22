//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №13: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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
    const double pi = acos(-1.0);

    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите x: ");
    scanf("%lf", &x);

    double coef = cbrt(x);
    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        double term1 = x / k;
        double term2 = tan(cos(k * pi / 3.0));
        sum += (term1 + term2) * log(x + k);
    }

    double result = coef * sum;
    printf("Результат: %lf\n", result);
    return 0;
}