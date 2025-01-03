//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №30: "Ввести дату (день и месяц) и число N. Определить, какой месяц будет через N дней от введенной даты."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int day, month, N;
    int days_in_month;

    printf("Введите дату (день и месяц): ");
    scanf("%d %d", &day, &month);
    printf("Введите число N: ");
    scanf("%d", &N);

    if(month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12) {
        days_in_month = 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        days_in_month = 30;
    }
    else if(month == 2) {
        days_in_month = 28; // Не учитываем високосный год
    }
    else {
        printf("Некорректный номер месяца.\n");
        return 1;
    }

    // Проверка корректности дня
    if(day < 1 || day > days_in_month) {
        printf("Некорректный день для указанного месяца.\n");
        return 1;
    }

    day += N;

    if(day > days_in_month) {
        day -= days_in_month;
        month++;
        if(month > 12) {
            month = 1;
        }
    }

    printf("Через %d дней будет месяц: %d\n", N, month);

    return 0;
}