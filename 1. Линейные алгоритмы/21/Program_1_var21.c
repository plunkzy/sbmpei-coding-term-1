//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №21: "Составить программу для пересчета величины временного интервала, заданного в минутах, в величину, выраженную в часах и минутах (150 мин = 2 ч 30 мин)."
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int minutes, hours, remaining_minutes;

    printf("Введите количество минут: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("%d минут = %d ч %d мин\n", minutes, hours, remaining_minutes);

    return 0;
}