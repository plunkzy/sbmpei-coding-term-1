//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №10: "Ввести N чисел. Найти сумму чисел, кратных 3."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int sum_mult_3 = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(number % 3 == 0) {
            sum_mult_3 += number;
        }
    }

    printf("Сумма чисел, кратных 3: %d\n", sum_mult_3);

    return 0;
}