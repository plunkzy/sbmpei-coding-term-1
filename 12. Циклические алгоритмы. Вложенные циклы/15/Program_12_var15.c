//
// Лабораторная работа №12 "Циклические алгоритмы. Вложенные циклы".
// Решение задачи №15 (условие смотрите в сборнике).
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x, z, F;

    printf("Таблица значений функции F(x, z):\n");
    for (x = 1.0; x <= 2.2; x += 0.3) {
        for (z = 0.6; z <= 2.2; z += 0.2) {
            F = cbrt(exp(2.0 / 3.0 - z)) / sqrt(pow(x, 4) + pow(x, z) + pow(log(fabs(z - 1.1)), 2));
            printf("F(%.1f, %.1f) = %f\n", x, z, F);
        }
    }

    return 0;
}
