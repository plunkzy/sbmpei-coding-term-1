//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №12: "Ввести натуральное число N в восьмеричной системе счисления. Вычислить его эквивалент в десятичной."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char octal[22]; // Строка для хранения восьмеричного числа (до 21 цифры)
    long long decimal = 0;

    printf("Введите натуральное число N в восьмеричной системе (до 21 цифры): ");
    scanf("%s", octal);

    int len = strlen(octal);
    for(int i = 0; i < len; i++) {
        if(octal[i] < '0' || octal[i] > '7') {
            printf("Ошибка: введено не восьмеричное число.\n");
            return 1;
        }
        decimal = decimal * 8 + (octal[i] - '0');
    }

    printf("Эквивалент числа %s в десятичной системе: %lld\n", octal, decimal);

    return 0;
}
