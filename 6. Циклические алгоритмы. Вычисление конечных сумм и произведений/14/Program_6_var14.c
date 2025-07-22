//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №14: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
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

    double coef = cbrt(n + tan(x));
    double prod = 1.0;

    for (int k = 1; k <= n; ++k) {
        double term1 = pow(x, 1.0/5.0);
        double term2 = fabs(cos(k * acos(-1.0)));
        double term3 = exp(k - log(x));
        prod *= term1 + term2 / term3 + 1.0;
    }

    double result = coef + prod;
    printf("Результат: %lf\n", result);
    return 0;
}