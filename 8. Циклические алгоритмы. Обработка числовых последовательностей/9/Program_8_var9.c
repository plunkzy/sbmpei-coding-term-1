//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №9: "Ввести N чисел. Найти произведение отрицательных чисел."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    long long product = 1;
    int has_negative = 0;

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
            product *= number;
            has_negative = 1;
        }
    }

    if(has_negative) {
        printf("Произведение отрицательных чисел: %lld\n", product);
    } else {
        printf("Отрицательных чисел не было введено.\n");
    }

    return 0;
}