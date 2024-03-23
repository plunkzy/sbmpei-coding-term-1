//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №24: "Составить программу для нахождения цифр четырехзначного числа."
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int number, digit1, digit2, digit3, digit4;

    printf("Введите четырехзначное число: ");
    scanf("%d", &number);

    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    printf("Цифры числа %d:\n", number);
    printf("1-я цифра: %d\n", digit1);
    printf("2-я цифра: %d\n", digit2);
    printf("3-я цифра: %d\n", digit3);
    printf("4-я цифра: %d\n", digit4);

    return 0;
}