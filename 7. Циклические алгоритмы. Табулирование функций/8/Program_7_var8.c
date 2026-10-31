//
// Лабораторная работа №7 "Циклические алгоритмы. Табулирование функций".
// Решение задачи №8 (вариант 8, сборник, стр. None).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const double A = 1.0;
    const double X1 = 0.0;
    const double dX = A / 4.0;
    int N;

    printf("Введите количество шагов N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X = X1 + i * dX;
        double Y;

        if (X < 2.0 * A) {
            Y = -sqrt(pow(pow(A, 2) - (X - A), 2));
        } else {
            Y = A * (1.0 - exp(A - X));
        }

        if (isfinite(Y)) {
            printf("X = %f, Y = %f\n", X, Y);
        } else {
            printf("X = %f, Y не определён\n", X);
        }
    }

    return 0;
}
