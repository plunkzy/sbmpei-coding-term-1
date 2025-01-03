//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №2: "Ввести натуральное число N. Выяснить, одинаковые ли первая и последние цифры числа."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int first_digit, last_digit;
    long long temp;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    last_digit = N % 10;

    temp = N;
    while(temp >= 10) {
        temp /= 10;
    }
    first_digit = temp;

    if(first_digit == last_digit) {
        printf("Первая и последняя цифры числа %lld одинаковы (%d).\n", N, first_digit);
    } else {
        printf("Первая и последняя цифры числа %lld различны (%d и %d).\n", N, first_digit, last_digit);
    }

    return 0;
}
