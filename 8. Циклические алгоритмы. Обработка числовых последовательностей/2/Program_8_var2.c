//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №2: "Ввести N чисел. Найти первое максимальное число и его номер."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int max_number;
    int max_position = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    printf("Введите число #1: ");
    scanf("%d", &number);
    max_number = number;
    max_position = 1;

    for(int i = 2; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number > max_number) {
            max_number = number;
            max_position = i;
        }
    }

    printf("Первое максимальное число: %d\n", max_number);
    printf("Номер этого числа: %d\n", max_position);

    return 0;
}
