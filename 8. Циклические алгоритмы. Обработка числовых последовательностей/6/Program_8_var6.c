//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №6: "Ввести N чисел. Определить количество положительных и количество отрицательных чисел."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int positive_count = 0, negative_count = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number > 0) {
            positive_count++;
        } else if(number < 0) {
            negative_count++;
        }
    }

    printf("Количество положительных чисел: %d\n", positive_count);
    printf("Количество отрицательных чисел: %d\n", negative_count);

    return 0;
}