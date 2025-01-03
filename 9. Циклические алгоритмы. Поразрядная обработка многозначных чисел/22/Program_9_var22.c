//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №22: "Ввести натуральное число N. Определить, является ли сумма его цифр четной."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int sum = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        sum += digit;
        N /= 10;
    }

    if(sum % 2 == 0) {
        printf("Сумма цифр числа является четной (%d).\n", sum);
    } else {
        printf("Сумма цифр числа является нечетной (%d).\n", sum);
    }

    return 0;
}
