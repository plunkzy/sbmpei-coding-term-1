//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №7: "Ввести N чисел. Определить, является ли введенная последовательность убывающей."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number, prev_number;
    int decreasing = 1;

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
        if(number >= prev_number) {
            decreasing = 0;
            break;
        }
        prev_number = number;
    }

    if(decreasing) {
        printf("Последовательность является убывающей.\n");
    } else {
        printf("Последовательность не является убывающей.\n");
    }

    return 0;
}