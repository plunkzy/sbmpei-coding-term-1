//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №3: "Ввести натуральное число N. Подсчитать, сколько нечетных цифр в числе."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int odd_count = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit % 2 != 0) {
            odd_count++;
        }
        N /= 10;
    }

    printf("Количество нечетных цифр в числе: %d\n", odd_count);

    return 0;
}
