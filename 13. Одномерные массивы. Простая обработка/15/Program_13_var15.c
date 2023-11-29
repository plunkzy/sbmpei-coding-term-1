//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №15: "При заданной величине А и массивах X(n) и Y(n) определить число произведений вида Xk*Yk, удовлетворяющих условию Xk*Yk < A, и сумму таких произведений.".
// Опубликовано 29.11.2023
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    float A, productSum = 0;
    int count = 0;

    printf("Введите значение A: ");
    scanf("%f", &A);

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива X:\n");
        for (int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    } else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for (int i = 0; i < n; i++) {
            X[i] = (float)(rand() % 100) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива Y:\n");
        for (int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    } else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив Y:\n");
        for (int i = 0; i < n; i++) {
            Y[i] = (float)(rand() % 100) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (X[i] * Y[i] < A) {
            count++;
            productSum += X[i] * Y[i];
        }
    }

    printf("\nКоличество произведений меньше A: %d\n", count);
    printf("Сумма таких произведений: %.2f\n", productSum);

    return 0;
}
