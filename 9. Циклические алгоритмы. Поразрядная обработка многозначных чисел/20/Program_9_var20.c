//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №20: "Ввести натуральное число N. Определить, сколько в его записи цифр, кратных 3."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int count_mult_3 = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit % 3 == 0) {
            count_mult_3++;
        }
        N /= 10;
    }

    printf("Количество цифр, кратных 3: %d\n", count_mult_3);

    return 0;
}
