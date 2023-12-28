//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №6: "Если сумма цифр введенного трехзначного числа N четная, то увеличить число вдвое, иначе найти сумму N+1/N".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int N, sum = 0, temp;

    printf("Введите трехзначное число N: ");
    scanf("%d", &N);

    temp = N;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum % 2 == 0) {
        printf("Результат: %d\n", N * 2);
    } else {
        printf("Результат: %f\n", (N + 1.0) / N);
    }

    return 0;
}
