//
// Лабораторная работа №9 "Циклические алгоритмы. Поразрядная обработка многозначных чисел".
// Решение задачи №14: "Ввести натуральное число N. Проверить, образуют ли его цифры арифметическую прогрессию."
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
    int is_arith_prog = 1;

    printf("Введите натуральное число N: ");
    scanf("%lld", &N);

    if(N <= 0) {
        printf("Ошибка: число должно быть натуральным (N > 0).\n");
        return 1;
    }

    // Извлекаем цифры числа и сохраняем в массив
    int digits[20];
    while(N > 0) {
        digits[count++] = N % 10;
        N /= 10;
    }

    if(count < 2) {
        printf("Арифметическая прогрессия не может быть определена для числа с одной цифрой.\n");
        return 1;
    }

    // Определяем разницу арифметической прогрессии
    ratio = digits[count - 2] - digits[count - 1];

    // Проверяем остальные разницы
    for(int i = count - 2; i > 0; i--) {
        if((digits[i - 1] - digits[i]) != ratio) {
            is_arith_prog = 0;
            break;
        }
    }

    if(is_arith_prog) {
        printf("Цифры числа образуют арифметическую прогрессию с разницей %d.\n", ratio);
    } else {
        printf("Цифры числа не образуют арифметическую прогрессию.\n");
    }

    return 0;
}
