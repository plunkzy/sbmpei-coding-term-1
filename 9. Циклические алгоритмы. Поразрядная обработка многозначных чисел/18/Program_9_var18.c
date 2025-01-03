//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №18: "Ввести натуральное число N. Проверить, расположены ли его цифры в порядке неубывания."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int previous_digit = -1;
    int non_decreasing = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(previous_digit != -1 && digit > previous_digit) {
            non_decreasing = 0;
            break;
        }
        previous_digit = digit;
        N /= 10;
    }

    if(non_decreasing) {
        printf("Цифры числа расположены в порядке неубывания.\n");
    } else {
        printf("Цифры числа не расположены в порядке неубывания.\n");
    }

    return 0;
}
