//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №26: "Ввести N чисел. Посчитать количество случаев, когда номер числа больше его значения."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int count = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        if(i > number) {
            count++;
        }
    }

    printf("Количество случаев, когда номер числа больше его значения: %d\n", count);

    return 0;
}