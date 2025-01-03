//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №13: "Ввести натуральное число N. Проверить, расположены ли его цифры в порядке возрастания."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int previous_digit = -1;
    int increasing = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(previous_digit != -1 && digit >= previous_digit) {
            increasing = 0;
            break;
        }
        previous_digit = digit;
        N /= 10;
    }

    if(increasing) {
        printf("Цифры числа расположены в порядке возрастания.\n");
    } else {
        printf("Цифры числа не расположены в порядке возрастания.\n");
    }

    return 0;
}
