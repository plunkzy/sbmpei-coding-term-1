//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №16: "Ввести натуральное число N. Определить, состоит ли запись этого числа только из одной цифры."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int first_digit, current_digit;
    int single_digit = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    // Получаем первую цифру
    first_digit = N % 10;
    N /= 10;

    // Проверяем остальные цифры
    while(N > 0) {
        current_digit = N % 10;
        if(current_digit != first_digit) {
            single_digit = 0;
            break;
        }
        N /= 10;
    }

    if(single_digit) {
        printf("Запись числа состоит только из одной цифры (%d).\n", first_digit);
    } else {
        printf("Запись числа состоит из разных цифр.\n");
    }

    return 0;
}