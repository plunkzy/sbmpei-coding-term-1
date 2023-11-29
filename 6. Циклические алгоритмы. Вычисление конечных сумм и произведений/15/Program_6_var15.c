//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №15: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 18.
// Опубликовано 28.11.2023
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

    double first_part = sqrt(pow(n, x) + 1);
    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        sum += pow(x, 2 * k - 1) / sqrt(exp(k * x) - 1.0 / k);
    }

    double second_part = first_part * sum;
    double result = second_part + sqrt(3) / 2;

    printf("Результат: %lf\n", result);
    return 0;
}