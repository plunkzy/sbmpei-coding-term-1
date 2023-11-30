//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №1: "Даны два ненулевых числа. Найти их сумму, разность, произведение и частное."
// Опубликовано 30.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double num1, num2;

    printf("Введите первое число (не равное нулю): ");
    scanf("%lf", &num1);
    printf("Введите второе число (не равное нулю): ");
    scanf("%lf", &num2);

    if (num1 == 0 || num2 == 0) {
        printf("Оба числа должны быть ненулевыми.\n");
        return 1;
    }

    printf("Сумма: %f\n", num1 + num2);
    printf("Разность: %f\n", num1 - num2);
    printf("Произведение: %f\n", num1 * num2);
    printf("Частное: %f\n", num1 / num2);

    return 0;
}
