//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №19: "Имеется некоторая сумма, выраженная в копейках. Определить, столько потребуется монет достоинством 1 коп, 5 коп и 15 коп для выплаты заданной суммы."
// Опубликовано 09.12.2023
// plunkzy education (by Voppor41)
//

#include <stdio.h>
#include <windows.h>

int main() {
    int amount;
    int coins1 = 0, coins5 = 0, coins15 = 0;

    printf("Введите сумму в копейках: ");
    scanf("%d", &amount);

    coins15 = amount / 15;
    amount = amount % 15;

    coins5 = amount / 5;
    amount = amount % 5;

    coins1 = amount;

    printf("Монет достоинством 1 копейка: %d\n", coins1);
    printf("Монет достоинством 5 копеек: %d\n", coins5);
    printf("Монет достоинством 15 копеек: %d\n", coins15);

    return 0;
}