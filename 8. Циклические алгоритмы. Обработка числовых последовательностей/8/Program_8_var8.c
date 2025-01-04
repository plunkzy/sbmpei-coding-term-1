//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №8: "Ввести N чисел. Определить, сколько чисел кратно 5."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int count_mult_5 = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number % 5 == 0) {
            count_mult_5++;
        }
    }

    printf("Количество чисел, кратных 5: %d\n", count_mult_5);

    return 0;
}