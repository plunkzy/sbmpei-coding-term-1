//
// Лабораторная работа №7 "Циклические алгоритмы. Табулирование функций".
// Решение задачи №6 (вариант 6, сборник, стр. None).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const double A = 0.8;
    const double X1 = -A;
    const double dX = A / 4.0;
    int N;

    printf("Введите количество шагов N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X = X1 + i * dX;
        double Y;

        if (X < 0.0) {
            Y = -A * sqrt(1.0 - pow(X, 2) / (4.0 * pow(A, 2)));
        } else {
            Y = A / 2.0 * (exp(X / A) + exp(-X / A));
        }

        if (isfinite(Y)) {
            printf("X = %f, Y = %f\n", X, Y);
        } else {
            printf("X = %f, Y не определён\n", X);
        }
    }

    return 0;
}
