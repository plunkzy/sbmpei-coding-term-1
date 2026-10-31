//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №29 (вариант 29, сборник, стр. 18).
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

    double factor = sqrt(pow(sin(x / n), 3));
    double sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += (1 + (k + 1.0) / n) / (exp(sqrt(x)) + log(x));
    }

    double result = factor * sum + 1.0 / 3;

    if (isfinite(result)) {
        printf("\nРезультат: %lf\n", result);
    } else {
        printf("\nРезультат: не определён\n");
    }

    return 0;
}
