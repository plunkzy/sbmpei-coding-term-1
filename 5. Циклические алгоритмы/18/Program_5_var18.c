//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №18: "Определить количество цифр целого неотрицательного числа."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long number;
    int count = 0;

    printf("Введите целое неотрицательное число: ");
    scanf("%lld", &number);

    if(number < 0) {
        printf("Ошибка: число должно быть неотрицательным.\n");
        return 1;
    }

    if(number == 0) {
        count = 1;
    } else {
        while(number > 0) {
            count++;
            number /= 10;
        }
    }

    printf("Количество цифр в числе: %d\n", count);

    return 0;
}
