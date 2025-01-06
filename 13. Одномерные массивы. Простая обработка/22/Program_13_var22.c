//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №22: "Найти произведение средних арифметических элементов массивов X(n) и Y(n).".
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
    float sumX = 0.0, sumY = 0.0;
    float averageX, averageY, product;

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choiceX);

    if (choiceX == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if (choiceX == 2) {
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

    if (choiceY == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if (choiceY == 2) {
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
        sumX += X[i];
    }

    averageX = sumX / n;

    for(int i = 0; i < n; i++) {
        sumY += Y[i];
    }

    averageY = sumY / n;
    product = averageX * averageY;

    printf("\nСреднее арифметическое массива X: %.2f\n", averageX);
    printf("Среднее арифметическое массива Y: %.2f\n", averageY);
    printf("Произведение средних арифметических: %.2f\n", product);

    return 0;
}