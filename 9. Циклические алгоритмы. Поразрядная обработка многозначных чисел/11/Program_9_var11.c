//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №11: "Ввести натуральное число N в двоичной системе счисления. Вычислить его эквивалент в десятичной."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char binary[65];
    long long decimal = 0;

    printf("Введите натуральное число N в двоичной системе (до 64 бит): ");
    scanf("%s", binary);

    int len = strlen(binary);
    for(int i = 0; i < len; i++) {
        if(binary[i] != '0' && binary[i] != '1') {
            printf("Ошибка: введено не двоичное число.\n");
            return 1;
        }
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("Эквивалент числа %s в десятичной системе: %lld\n", binary, decimal);

    return 0;
}
