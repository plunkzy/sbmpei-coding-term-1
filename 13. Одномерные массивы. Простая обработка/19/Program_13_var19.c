//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №19: "При заданных массивах X(n) и Y(n) заменить в массиве X(n) значения тех элементов Xk, для которых выполняется условие |Xk - Yk| < A - 2, значениями элементов Yk. Подсчитать число произведенных замен.".
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
    int replaceCount = 0;

    printf("Введите значение A: ");
    scanf("%f", &A);

    printf("Введите размер массивов X и Y: ");
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

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if (choice == 2) {
        srand(time(NULL) + 1);
        printf("Сгенерированный массив Y:\n");
        for(int i = 0; i < n; i++) {
            Y[i] = ((float)(rand() % 201 - 100)) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода массива Y.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(fabs(X[i] - Y[i]) < (A - 2.0)) {
            X[i] = Y[i];
            replaceCount++;
        }
    }

    printf("\nМассив X после замен:\n");
    for(int i = 0; i < n; i++) {
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    printf("\nМассив Y:\n");
    for(int i = 0; i < n; i++) {
        printf("Y[%d] = %.2f\n", i, Y[i]);
    }

    printf("\nКоличество произведенных замен: %d\n", replaceCount);

    return 0;
}