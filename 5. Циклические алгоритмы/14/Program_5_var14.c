//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №14: "Составить программу перевода час –> мин –> сек от 1 до N часов."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N, hours;
    int minutes, seconds;

    printf("Введите количество часов N: ");
    scanf("%d", &N);

    printf("Часы\tМинуты\tСекунды\n");
    printf("-----------------------------\n");

    for(hours = 1; hours <= N; hours++) {
        minutes = hours * 60;
        seconds = minutes * 60;
        printf("%d\t%d\t%d\n", hours, minutes, seconds);
    }

    return 0;
}
