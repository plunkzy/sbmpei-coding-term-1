//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №8: "Ввести натуральное число N. Подсчитать, сколько четных цифр в числе."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int even_count = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit % 2 == 0) {
            even_count++;
        }
        N /= 10;
    }

    printf("Количество четных цифр в числе: %d\n", even_count);

    return 0;
}
