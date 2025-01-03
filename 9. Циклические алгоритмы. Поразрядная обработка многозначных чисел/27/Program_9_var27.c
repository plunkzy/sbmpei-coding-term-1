//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №27: "Ввести натуральное число N. Определить, является ли его младшая цифра самой маленькой."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <limits.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int last_digit, min_digit = INT_MAX;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    last_digit = N % 10;

    while(N > 0) {
        int digit = N % 10;
        if(digit < min_digit) {
            min_digit = digit;
        }
        N /= 10;
    }

    if(last_digit == min_digit) {
        printf("Младшая цифра является самой маленькой (%d).\n", last_digit);
    } else {
        printf("Младшая цифра не является самой маленькой (%d).\n", last_digit);
    }

    return 0;
}
