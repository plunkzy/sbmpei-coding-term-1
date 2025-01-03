//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №17: "Найти сумму квадратов всех чисел от 1 до N."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    long long sum = 0;

    printf("Введите натуральное число N: ");
    scanf("%d", &N);

    if(N < 1) {
        printf("Ошибка: N должно быть натуральным числом (N >= 1).\n");
        return 1;
    }

    for(int i = 1; i <= N; i++) {
        sum += (long long)i * i;
    }

    printf("Сумма квадратов чисел от 1 до %d равна %lld.\n", N, sum);

    return 0;
}
