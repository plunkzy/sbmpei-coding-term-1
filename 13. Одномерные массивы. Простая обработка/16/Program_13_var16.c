//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №16: "В массиве X(n) подсчитать количество отрицательных элементов и изменить значение каждого положительного элемента путем его деления на значение последующего члена. Элемент Xn должен быть заведомо отрицательным.".
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    int negativeCount = 0;

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n];

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
            X[i] = (float)(rand() % 21 - 10);
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] < 0) {
            negativeCount++;
        }
    }

    for(int i = 0; i < n - 1; i++) {
        if(X[i] > 0) {
            if(X[i+1] != 0) {
                X[i] = X[i] / X[i+1];
            }
            else {
                printf("Деление на ноль для элемента X[%d]. Значение не изменено.\n", i);
            }
        }
    }

    printf("\nМодифицированный массив X:\n");
    for(int i = 0; i < n; i++) {
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    printf("\nКоличество отрицательных элементов: %d\n", negativeCount);

    return 0;
}