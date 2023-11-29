//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №15: "Ввести натуральное число N. Переставить его цифры в обратном порядке".
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, reversed = 0;

    printf("Введите натуральное число N: ");
    scanf("%d", &n);

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("Число с переставленными цифрами: %d\n", reversed);

    return 0;
}
