//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №15: "Ввести натуральное число N. Переставить его цифры в обратном порядке".
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double eps, X, u, s, trueValue, error;
    printf("Введите погрешность eps:");
    scanf("%g", eps);
    printf("X\tСумма ряда\tИстинное значение\tОшибка\n");
    for(X = 0.50; X < 0.80; X += 0.05) {
        s = 0;
        int n = 1;
        do {
            u = pow(X, 2*n - 1) / n;
            s += u;
            n++;
        } while (fabs(u) > eps);

        trueValue = -(1/X)*log(1-pow(X, 2));
        error = trueValue - s;
        printf("%.2lf\t%.6lf\t%.6lf\t%.6lg\n", X, s, trueValue, error);
    }
    return 0;
}