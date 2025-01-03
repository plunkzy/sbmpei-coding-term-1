//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №29: "Ввести натуральное число N. Определить, сколько в его записи встречается его старшая цифра."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int first_digit, current_digit;
    int count = 0;

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
        if(current_digit == first_digit) {
            count++;
        }
        temp /= 10;
    }

    printf("Цифра '%d' встречается в числе %lld %d раз(а).\n", first_digit, N, count);

    return 0;
}
