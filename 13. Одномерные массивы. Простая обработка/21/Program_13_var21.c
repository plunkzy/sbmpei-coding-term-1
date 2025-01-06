//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №21: "При заданном массиве X(n) найти массив Y(n) по правилу Yk = A – sin(Xk), если Xk > 0, и Yk = A – cos(Xk), если Xk < 0, при этом подсчитать количество неотрицательных элементов массива X(n).".
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    float A;
    int nonNegativeCount = 0;

    printf("Введите значение A: ");
    scanf("%f", &A);

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for(int i = 0; i < n; i++) {
            X[i] = ((float)(rand() % 201 - 100)) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода массива X.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] > 0) {
            Y[i] = A - sin(X[i]);
            nonNegativeCount++;
        }
        else if(X[i] < 0) {
            Y[i] = A - cos(X[i]);
        }
        else {
            Y[i] = A - 1.0;
            nonNegativeCount++;
        }
    }

    printf("\nМассив X:\n");
    for(int i = 0; i < n; i++) {
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    printf("\nМассив Y:\n");
    for(int i = 0; i < n; i++) {
        printf("Y[%d] = %.2f\n", i, Y[i]);
    }

    printf("\nКоличество неотрицательных элементов массива X(n): %d\n", nonNegativeCount);

    return 0;
}