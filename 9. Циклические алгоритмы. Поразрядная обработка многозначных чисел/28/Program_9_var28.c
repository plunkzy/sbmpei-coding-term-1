//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №28: "Ввести натуральное число N. Определить, сколько в его записи цифр, кратных 2."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int count_mult_2 = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit % 2 == 0) {
            count_mult_2++;
        }
        N /= 10;
    }

    printf("Количество цифр, кратных 2: %d\n", count_mult_2);

    return 0;
}
