//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №20: "Вычислить степень числа A с натуральным показателем N."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double A, result = 1.0;
    int N, exponent;

    printf("Введите число A: ");
    scanf("%lf", &A);
    printf("Введите натуральный показатель степени N: ");
    scanf("%d", &N);

    if(N < 1) {
        printf("Ошибка: показатель степени должен быть натуральным числом (N >= 1).\n");
        return 1;
    }

    for(exponent = 1; exponent <= N; exponent++) {
        result *= A;
    }

    printf("%.2lf в степени %d равно %.2lf\n", A, N, result);

    return 0;
}
