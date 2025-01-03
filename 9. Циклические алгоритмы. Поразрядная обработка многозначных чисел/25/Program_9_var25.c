//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №25: "Ввести натуральное число N. Проверить, образуют ли его цифры геометрическую прогрессию."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long N;
    int count = 0;
    double ratio = 0.0;
    int is_geom_prog = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    int digits[20];
    while(N > 0) {
        digits[count++] = N % 10;
        N /= 10;
    }

    if(count < 2) {
        printf("Геометрическая прогрессия не может быть определена для числа с одной цифрой.\n");
        return 1;
    }

    // Определяем отношение геометрической прогрессии
    ratio = (double)digits[count - 2] / digits[count - 1];
    if(digits[count - 1] == 0) {
        printf("Ошибка: деление на ноль при определении отношения прогрессии.\n");
        return 1;
    }

    // Проверяем остальные отношения
    for(int i = count - 2; i > 0; i--) {
        if(digits[i - 1] == 0 || ((double)digits[i] / digits[i - 1]) != ratio) {
            is_geom_prog = 0;
            break;
        }
    }

    if(is_geom_prog) {
        printf("Цифры числа образуют геометрическую прогрессию с отношением %.2lf.\n", ratio);
    } else {
        printf("Цифры числа не образуют геометрическую прогрессию.\n");
    }

    return 0;
}
