//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №15: "Ввести N чисел. Найти произведение чисел, кратных 3".
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N;
    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    int product = 1;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int number;
        printf("Введите число: ");
        scanf("%d", &number);

        if (number % 3 == 0) {
            product *= number;
            count++;
        }
    }

    if (count > 0) {
        printf("Произведение чисел, кратных 3: %d\n", product);
    } else {
        printf("Нет чисел, кратных 3.\n");
    }

    return 0;
}
