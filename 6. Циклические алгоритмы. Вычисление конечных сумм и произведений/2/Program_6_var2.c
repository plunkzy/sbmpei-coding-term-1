//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №2: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
// Опубликовано 22.07.20250
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
        double base = pow(x, k - 1) / (k + 1.0 / 3.0);
        prod *= pow(base, 1.0 / k) + 0.5;
    }

    double result = sqrt(x) * log(x) - prod;

    printf("Результат: %lf\n", result);
    return 0;
}