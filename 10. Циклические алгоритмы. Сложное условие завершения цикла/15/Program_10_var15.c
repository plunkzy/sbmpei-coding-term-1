//
// Лабораторная работа №10 "Циклические алгоритмы. Сложное условие завершения цикла".
// Решение задачи №15: "Найти точку, в которой функция 3x^4 - 4x^3 - 12x^2 + 2 равна -10".
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double X = 0.1;
    const double limit = 10.0;
    const double eps = 0.00000000000001;

    while (X <= limit) {
        double result = 3 * pow(X, 4) - 4 * pow(X, 3) - 12 * pow(X, 2) + 2;

        if (result + 10.0 <= eps) {
            printf("Точка найдена! X = %lf, f(x) = %lf\n", X, result);
            break;
        }

        printf("X = %lf, f(x) = %lf\n", X, result);
        X += 0.01;
    }

    return 0;
}