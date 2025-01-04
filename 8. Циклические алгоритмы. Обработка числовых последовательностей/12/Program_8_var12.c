//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №12: "Ввести N чисел. Определить, является ли введенная последовательность неубывающей."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number, prev_number;
    int non_decreasing = 1;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    printf("Введите число #1: ");
    scanf("%d", &number);
    prev_number = number;

    for(int i = 2; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number < prev_number) {
            non_decreasing = 0;
            break;
        }
        prev_number = number;
    }

    if(non_decreasing) {
        printf("Последовательность является неубывающей.\n");
    } else {
        printf("Последовательность не является неубывающей.\n");
    }

    return 0;
}