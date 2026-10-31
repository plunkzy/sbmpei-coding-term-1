//
// Лабораторная работа №7 "Циклические алгоритмы. Табулирование функций".
// Решение задачи №11 (вариант 11, сборник, стр. None).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    const double A = 2.0;
    const double X1 = -5.0 * A;
    const double dX = 2.0 * A / 5.0;
    int N;

    printf("Введите количество шагов N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X = X1 + i * dX;
        double Y;

        if (X <= -1.0) {
            Y = A * cos(X + 1.0) + A;
        } else {
            Y = A * pow(X + 2.0, 1.5);
        }

        if (isfinite(Y)) {
            printf("X = %f, Y = %f\n", X, Y);
        } else {
            printf("X = %f, Y не определён\n", X);
        }
    }

    return 0;
}
