//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №25: "Дано трехзначное число. Найти сумму и произведение его цифр"
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int number, digit1, digit2, digit3, sum, mnozh;

    printf("Введите трехзначное число: ");
    scanf("%d", &number);

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    sum = digit1 + digit2 + digit3;
    mnozh = digit1 * digit2 * digit3;

    printf("Сумма цифр числа %d равна %d\n", number, sum);
    printf("Произведение цифр числа %d равно %d\n", number, mnozh);

    return 0;
}