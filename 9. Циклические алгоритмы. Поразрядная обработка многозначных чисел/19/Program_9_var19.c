//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №19: "Ввести натуральное число N. Определить, сколько в его записи встречается его младшая цифра."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int last_digit, count = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    last_digit = N % 10;

    long long temp = N;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit == last_digit) {
            count++;
        }
        temp /= 10;
    }

    printf("Цифра '%d' встречается в числе %lld %d раз(а).\n", last_digit, N, count);

    return 0;
}
