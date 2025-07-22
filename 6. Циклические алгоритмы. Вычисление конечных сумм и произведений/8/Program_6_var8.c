//
// Лабораторная работа №6 "Циклические алгоритмы. Вычисление конечных сумм и произведений".
// Решение задачи №8: "Составить алгоритм и программу вычисления значения выражения". Пример смотреть на странице 17.
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

    double pi = acos(-1.0);
    double part1 = x * pi / n;
    double prod = 1.0;
    double se = sqrt(exp(1.0));

    for (int k = 1; k <= n; ++k) {
        double top = log(pow(se, 0.1 * k) + x);
        double bot = 1.0/3.0 + fabs(tan(sin(k * x / 3.0)));
        prod *= top / bot;
    }

    double result = part1 + prod + 0.5;
    printf("Результат: %lf\n", result);
    return 0;
}