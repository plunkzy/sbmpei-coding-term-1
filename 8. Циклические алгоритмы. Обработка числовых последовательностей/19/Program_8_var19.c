//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №19: "Ввести N чисел. Определить, является ли введенная последовательность возрастающей."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number, prev_number;
    int increasing = 1;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 1) {
        printf("Для проверки возрастающей последовательности необходимо вводить как минимум два числа.\n");
        return 1;
    }

    printf("Введите число #1: ");
    scanf("%d", &prev_number);

    for(int i = 2; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number <= prev_number) {
            increasing = 0;
        }
        prev_number = number;
    }

    if(increasing) {
        printf("Последовательность является возрастающей.\n");
    } else {
        printf("Последовательность не является возрастающей.\n");
    }

    return 0;
}