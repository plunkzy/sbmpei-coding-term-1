//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №23: "Ввести натуральное число N. Заменить в его записи все нечетные цифры на 2."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    long long modified = 0;
    long long multiplier = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    long long temp = N;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit % 2 != 0) {
            digit = 2;
        }
        modified += digit * multiplier;
        multiplier *= 10;
        temp /= 10;
    }

    printf("Число после замены нечетных цифр на 2: %lld\n", modified);

    return 0;
}
