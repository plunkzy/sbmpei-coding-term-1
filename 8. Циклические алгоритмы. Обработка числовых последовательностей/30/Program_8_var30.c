//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №30: "Ввести N чисел. Для каждого числа вывести сообщение, является ли это число полным квадратом целого числа."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    double sqrt_val;

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
            printf("Число #%d (%d) не является полным квадратом целого числа (отрицательное).\n", i, number);
            continue;
        }
        sqrt_val = sqrt((double)number);
        if(floor(sqrt_val) == sqrt_val) {
            printf("Число #%d (%d) является полным квадратом целого числа.\n", i, number);
        } else {
            printf("Число #%d (%d) не является полным квадратом целого числа.\n", i, number);
        }
    }

    return 0;
}