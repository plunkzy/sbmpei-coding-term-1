//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №3: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double absx = fabs(x);
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        double base = exp(k + sqrt(absx)) * cos(2.0 * x / k);
        sum += pow(base, 1.0 / k);
    }

    double result = sqrt(absx) + n * sum;

    printf("Результат: %lf\n", result);
    return 0;
}