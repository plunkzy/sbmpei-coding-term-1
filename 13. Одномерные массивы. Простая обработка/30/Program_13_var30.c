//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №30: "Найти произведение минимальных элементов массивов X(n) и Y(n).".
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choiceX, choiceY;
    float minX, minY, product;

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choiceX);

    if(choiceX == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if(choiceX == 2) {
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
    scanf("%d", &choiceY);

    if(choiceY == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if(choiceY == 2) {
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

    minX = X[0];
    for(int i = 1; i < n; i++) {
        if(X[i] < minX) {
            minX = X[i];
        }
    }

    minY = Y[0];
    for(int i = 1; i < n; i++) {
        if(Y[i] < minY) {
            minY = Y[i];
        }
    }

    product = minX * minY;

    printf("\nМинимальный элемент массива X: %.2f\n", minX);
    printf("Минимальный элемент массива Y: %.2f\n", minY);
    printf("Произведение минимальных элементов: %.2f\n", product);

    return 0;
}