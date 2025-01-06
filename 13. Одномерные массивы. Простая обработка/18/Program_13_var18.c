//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №18: "В массиве X(n) изменить значения всех положительных элементов, умножив их значения на 5, а отрицательные элементы уменьшить вдвое, при этом подсчитать количество элементов, абсолютная величина которых не превышает заданное значение A.".
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
    float A;
    int count = 0;

    printf("Введите значение A: ");
    scanf("%f", &A);

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
            X[i] = ((float)(rand() % 201 - 100)) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] > 0) {
            X[i] *= 5;
        }
        else if(X[i] < 0) {
            X[i] /= 2;
        }

        if(fabs(X[i]) <= A) {
            count++;
        }
    }

    printf("\nМодифицированный массив X:\n");
    for(int i = 0; i < n; i++) {
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    printf("\nКоличество элементов с абсолютной величиной, не превышающей %.2f: %d\n", A, count);

    return 0;
}