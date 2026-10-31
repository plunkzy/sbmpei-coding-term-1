//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №25 (вариант 25, сборник, стр. 18).
// Опубликовано 31.10.2026
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
    if (n < 1) {
        printf("Число n должно быть положительным.\n");
        return 1;
    }
    printf("Введите x: ");
    scanf("%lf", &x);

    double factor = sqrt(exp(x / n));
    double sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += atan(x - k / (k + 1.0)) / exp((k + 1.0) / k);
    }

    double result = factor * sum;

    if (isfinite(result)) {
        printf("\nРезультат: %lf\n", result);
    } else {
        printf("\nРезультат: не определён\n");
    }

    return 0;
}
