//
// Лабораторная работа №7 "Циклические алгоритмы. Табулирование функций".
// Решение задачи №28 (вариант 28, сборник, стр. 22).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const double A = 1.0;
    const double X1 = -2.0 * A;
    const double dX = 3.0 * A / 10.0;
    int N;

    printf("Введите количество шагов N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X = X1 + i * dX;
        double Y;

        if (X < 2.0 * A) {
            Y = 2.0 * A - A / 2.0 * (exp((X - 2.0 * A) / A) + exp(-(X - 2.0 * A) / A));
        } else {
            Y = A + sqrt(A * pow(X, 3));
        }

        if (isfinite(Y)) {
            printf("X = %f, Y = %f\n", X, Y);
        } else {
            printf("X = %f, Y не определён\n", X);
        }
    }

    return 0;
}
