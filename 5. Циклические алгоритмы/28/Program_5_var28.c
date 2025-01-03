//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №28: "Найти сумму всех n-значных чисел (1 ≤ n ≤ 4)."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    long long sum = 0;
    long long start, end;

    printf("Введите количество цифр n (1 <= n <= 4): ");
    scanf("%d", &n);

    if(n < 1 || n > 4) {
        printf("Ошибка: n должно быть в диапазоне от 1 до 4.\n");
        return 1;
    }

    start = (n == 1) ? 1 : (long long)pow(10, n - 1);
    end = (long long)pow(10, n) - 1;

    for(long long i = start; i <= end; i++) {
        sum += i;
    }

    printf("Сумма всех %d-значных чисел от %lld до %lld равна %lld.\n", n, start, end, sum);

    return 0;
}