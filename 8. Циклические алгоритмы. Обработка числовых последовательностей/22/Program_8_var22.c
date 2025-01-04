//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №22: "Ввести N чисел. Найти полусумму максимального и минимального числа."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <limits.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int max = INT_MIN;
    int min = INT_MAX;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number > max) {
            max = number;
        }
        if(number < min) {
            min = number;
        }
    }

    double half_sum = (max + min) / 2.0;
    printf("Полусумма максимального (%d) и минимального (%d) числа: %.2lf\n", max, min, half_sum);

    return 0;
}