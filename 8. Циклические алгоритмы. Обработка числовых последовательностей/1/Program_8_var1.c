//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №1: "Ввести N чисел. Найти среднее арифметическое отрицательных чисел."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N, count = 0;
    double sum = 0.0;
    int number;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number < 0) {
            sum += number;
            count++;
        }
    }

    if(count > 0) {
        double average = sum / count;
        printf("Среднее арифметическое отрицательных чисел: %.2lf\n", average);
    } else {
        printf("Введены только неотрицательные числа.\n");
    }

    return 0;
}