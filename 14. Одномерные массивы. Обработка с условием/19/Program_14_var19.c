//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №19 (вариант 19, сборник, стр. 39).
// Опубликовано 31.10.2026
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;

    printf("Введите размер массива A: ");
    scanf("%d", &n);

    float A[n];

    printf("Выберите способ ввода массива A (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива A:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = ", i);
            scanf("%f", &A[i]);
        }
    } else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив A:\n");
        for (int i = 0; i < n; i++) {
            A[i] = rand() % 131 - 30;
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    } else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    int nonIncreasing = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] > A[i - 1]) {
            nonIncreasing = 0;
        }
    }

    if (nonIncreasing) {
        printf("\nУсловие выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                A[i] = 99;
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    } else {
        printf("\nУсловие не выполнено.\n");
        float minimum = A[0];
        for (int i = 0; i < n; i++) {
            if (A[i] < minimum) {
                minimum = A[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (A[i] == minimum) {
                A[i] = A[i] * 2;
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    }

    return 0;
}
