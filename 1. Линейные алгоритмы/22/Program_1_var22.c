//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №22: "Составить программу вычисления величины дохода по вкладу. Процентная ставка (в процентах годовых) и время хранения (в днях) задаются во время работы программы."
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double deposit, stavka, time, income;

    printf("Введите сумму вклада: ");
    scanf("%lf", &deposit);

    printf("Введите процентную ставку (в процентах годовых): ");
    scanf("%lf", &stavka);

    printf("Введите время хранения вклада (в днях): ");
    scanf("%lf", &time);

    income = deposit * stavka / 100 * time / 365;

    printf("Доход по вкладу %.2lf рублей за %.0lf дней при ставке %.2lf%% годовых составит %.2lf рублей\n", deposit, time, stavka, income);

    return 0;
}