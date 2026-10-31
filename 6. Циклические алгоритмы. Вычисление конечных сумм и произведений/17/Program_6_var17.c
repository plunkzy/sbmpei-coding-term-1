//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №17 (вариант 17, сборник, стр. 17).
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

    double factor = 1.0 / 7 + sqrt(x);
    double sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += pow(exp(1.2 * k) - (k + 1.0) / k, 1.0 / k) / (n + log(sqrt(k * x)));
    }

    double result = factor * sum;

    if (isfinite(result)) {
        printf("\nРезультат: %lf\n", result);
    } else {
        printf("\nРезультат: не определён\n");
    }

    return 0;
}
