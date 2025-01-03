//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №1: "Ввести натуральное число N. Выяснить, входит ли цифра «2» в запись числа."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int digit_found = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    long long temp = N;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit == 2) {
            digit_found = 1;
            break;
        }
        temp /= 10;
    }

    if(digit_found) {
        printf("Цифра '2' присутствует в числе %lld.\n", N);
    } else {
        printf("Цифра '2' отсутствует в числе %lld.\n", N);
    }

    return 0;
}