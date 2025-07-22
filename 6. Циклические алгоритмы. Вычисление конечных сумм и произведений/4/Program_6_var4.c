//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №4: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double first_part = exp(x) - sin(x);
    double prod = 1.0;
    for (int k = 1; k <= n; ++k) {
        double num = sqrt(x * x * pow(log(n), k / 2.0));
        double denom = k + 4.0/3.0;
        prod *= num / denom;
    }

    double result = first_part + prod;
    printf("Результат: %lf\n", result);
    return 0;
}