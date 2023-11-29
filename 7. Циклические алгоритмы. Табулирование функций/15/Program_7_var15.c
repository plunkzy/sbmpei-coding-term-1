//
// Лабораторная работа №7 "Циклические алгоритмы. Табулирование функций".
// Решение задачи №15: "Составить алгоритм и программу вычисления N значений функции Y для X, изменяющегося от X1 с шагом dX". Систему смотреть на странице 20.
// Опубликовано 28.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const double A = 2.0;
    const double X1 = 0.0;
    const double dX = 4.0 * A / 5.0;
    int N;

    printf("Введите количество шагов N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        double X = X1 + i * dX;
        double Y;

        if (X < 8.0 * A) {
            Y = A - A * exp(X - 8.0 * A);
        } else {
            Y = sqrt(2.0 * A * X - 16.0 * A * A);
        }

        printf("X = %f, Y = %f\n", X, Y);
    }

    return 0;
}
