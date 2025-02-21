//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №25: "Ввести дату (день и месяц). Определить, сколько дней осталось до начала следующего месяца."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int day, month;
    int days_in_month;
    int days_left;

    printf("Введите дату (день и месяц): ");
    scanf("%d %d", &day, &month);

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

    if(day < 1 || day > days_in_month) {
        printf("Некорректный день для указанного месяца.\n");
        return 1;
    }

    days_left = days_in_month - day;

    printf("Дней до начала следующего месяца: %d\n", days_left);

    return 0;
}
