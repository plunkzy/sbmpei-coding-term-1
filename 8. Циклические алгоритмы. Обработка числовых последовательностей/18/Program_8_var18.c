//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №18: "Ввести N чисел. Подсчитать количество случаев равенства двух чисел, идущих друг за другом."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int current_number, prev_number;
    int count = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 1) { // Необходимо минимум два числа для сравнения
        printf("Для подсчета необходимо вводить как минимум два числа.\n");
        return 1;
    }

    printf("Введите число #1: ");
    scanf("%d", &prev_number);

    for(int i = 2; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &current_number);
        if(current_number == prev_number) {
            count++;
        }
        prev_number = current_number;
    }

    printf("Количество случаев равенства двух последовательных чисел: %d\n", count);

    return 0;
}