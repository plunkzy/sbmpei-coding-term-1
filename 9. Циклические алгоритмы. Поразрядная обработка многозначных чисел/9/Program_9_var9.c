//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №9: "Ввести натуральное число N. Определить, какая наибольшая цифра числа."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <limits.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int max_digit = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit > max_digit) {
            max_digit = digit;
            if(max_digit == 9) {
                break; // Максимальная возможная цифра найдена
            }
        }
        N /= 10;
    }

    printf("Наибольшая цифра в числе: %d\n", max_digit);

    return 0;
}
