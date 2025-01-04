//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №28: "Ввести N чисел. После ввода каждого числа выводить сообщение о его четности."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;

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
            printf("Число #%d (%d) является четным.\n", i, number);
        } else {
            printf("Число #%d (%d) является нечетным.\n", i, number);
        }
    }

    return 0;
}