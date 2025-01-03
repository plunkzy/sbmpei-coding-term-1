//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №21: "Ввести натуральное число N. Определить, является ли его старшая цифра самой большой."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <limits.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int first_digit, current_digit;
    int is_max = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    long long temp = N;
    while(temp >= 10) {
        temp /= 10;
    }
    first_digit = temp;

    temp = N;
    while(temp > 0) {
        current_digit = temp % 10;
        if(current_digit > first_digit) {
            is_max = 0;
            break;
        }
        temp /= 10;
    }

    if(is_max) {
        printf("Старшая цифра является самой большой (%d).\n", first_digit);
    } else {
        printf("Старшая цифра не является самой большой.\n");
    }

    return 0;
}
