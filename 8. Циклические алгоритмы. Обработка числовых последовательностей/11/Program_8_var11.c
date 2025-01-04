//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №11: "Ввести N чисел. Найти количество четных и нечетных чисел."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int even_count = 0, odd_count = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Количество четных чисел: %d\n", even_count);
    printf("Количество нечетных чисел: %d\n", odd_count);

    return 0;
}