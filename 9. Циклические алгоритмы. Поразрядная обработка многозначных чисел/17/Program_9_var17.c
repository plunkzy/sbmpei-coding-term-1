//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №17: "Ввести натуральное число N. Подсчитать, сколько его цифр не равны нулю."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int non_zero_count = 0;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    while(N > 0) {
        int digit = N % 10;
        if(digit != 0) {
            non_zero_count++;
        }
        N /= 10;
    }

    printf("Количество цифр, не равных нулю: %d\n", non_zero_count);

    return 0;
}
