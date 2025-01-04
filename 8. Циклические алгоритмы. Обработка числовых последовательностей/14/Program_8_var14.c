//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №14: "Ввести N чисел. Найти произведения четных и нечетных чисел."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    long long product_even = 1, product_odd = 1;
    int has_even = 0, has_odd = 0;

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
            product_even *= number;
            has_even = 1;
        } else {
            product_odd *= number;
            has_odd = 1;
        }
    }

    if(has_even) {
        printf("Произведение четных чисел: %lld\n", product_even);
    } else {
        printf("Четных чисел не было введено.\n");
    }

    if(has_odd) {
        printf("Произведение нечетных чисел: %lld\n", product_odd);
    } else {
        printf("Нечетных чисел не было введено.\n");
    }

    return 0;
}