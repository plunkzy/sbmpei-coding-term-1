//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №30: "Ввести натуральное число N. Проверить, расположены ли его цифры в порядке невозрастания."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int prev_digit = -1;
    int non_increasing = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(prev_digit != -1 && digit < prev_digit) {
            non_increasing = 0;
            break;
        }
        prev_digit = digit;
        N /= 10;
    }

    if(non_increasing) {
        printf("Цифры числа расположены в порядке невозрастания.\n");
    } else {
        printf("Цифры числа не расположены в порядке невозрастания.\n");
    }

    return 0;
}
