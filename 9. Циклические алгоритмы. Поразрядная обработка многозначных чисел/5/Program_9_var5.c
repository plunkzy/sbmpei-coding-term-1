//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №5: "Ввести натуральное число N. Определить, какая наименьшая цифра числа."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <limits.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int min_digit = 9;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit < min_digit) {
            min_digit = digit;
            if(min_digit == 0) {
                break; // Минимальная возможная цифра найдена
            }
        }
        N /= 10;
    }

    printf("Наименьшая цифра в числе: %d\n", min_digit);

    return 0;
}
