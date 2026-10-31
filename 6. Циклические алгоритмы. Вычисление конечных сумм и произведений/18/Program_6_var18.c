//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №18 (вариант 18, сборник, стр. 17).
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

    double head = tan(sin(x));
    double product = 1;
    for (int k = 1; k <= n; k++) {
        product *= log(pow(x, k - 1) + sqrt(exp(k + x))) / (0.5 * k + fabs(x));
    }

    double result = head + product;

    if (isfinite(result)) {
        printf("\nРезультат: %lf\n", result);
    } else {
        printf("\nРезультат: не определён\n");
    }

    return 0;
}
