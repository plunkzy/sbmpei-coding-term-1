//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №27: "Найти сколько множителей необходимо, чтобы произведение 2*4*6*… оказалось больше числа A."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    long long A, product = 1;
    int count = 0;
    int current = 2;

    printf("Введите положительное число A: ");
    scanf("%lld", &A);

    if(A <= 0) {
        printf("Ошибка: A должно быть положительным числом.\n");
        return 1;
    }

    while(product <= A) {
        product *= current;
        count++;
        current += 2;
    }

    printf("Необходимо %d множителей, чтобы произведение 2*4*6*… превысило %lld.\n", count, A);

    return 0;
}