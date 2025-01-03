//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №25: "Даны два целых числа A и B (A < B). Найти сумму всех целых чисел от A до B включительно."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int A, B, sum = 0;

    printf("Введите два целых числа A и B (A < B): ");
    scanf("%d %d", &A, &B);

    if(A >= B) {
        printf("Ошибка: A должно быть меньше B.\n");
        return 1;
    }

    for(int i = A; i <= B; i++) {
        sum += i;
    }

    printf("Сумма всех целых чисел от %d до %d равна %d.\n", A, B, sum);

    return 0;
}