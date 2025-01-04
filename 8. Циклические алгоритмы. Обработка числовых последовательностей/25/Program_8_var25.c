//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №25: "Ввести N чисел. Для каждого из N чисел определить его отношение к заданному числу A (больше, меньше, равно)."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int A;
    int number;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    printf("Введите число A для сравнения: ");
    scanf("%d", &A);

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number > A) {
            printf("Число #%d (%d) больше %d.\n", i, number, A);
        } else if(number < A) {
            printf("Число #%d (%d) меньше %d.\n", i, number, A);
        } else {
            printf("Число #%d (%d) равно %d.\n", i, number, A);
        }
    }

    return 0;
}