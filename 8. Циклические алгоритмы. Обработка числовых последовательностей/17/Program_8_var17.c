//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №17: "Ввести N чисел. При вводе вычислять сумму чисел. Как только сумма превысит 100 – вывести сообщение."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    int number;
    int sum = 0;
    int message_printed = 0;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%d", &number);
        sum += number;
        if(!message_printed && sum > 100) {
            printf("Сумма чисел превысила 100.\n");
            message_printed = 1;
        }
    }

    if(!message_printed) {
        printf("Сумма чисел не превысила 100.\n");
    }

    return 0;
}