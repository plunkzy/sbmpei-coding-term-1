//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №14 (вариант 14, сборник, стр. 39).
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

    int allNonNegative = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            allNonNegative = 0;
        }
    }

    if (allNonNegative) {
        printf("\nУсловие выполнено.\n");
        int index = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] < A[index]) {
                index = i;
            }
        }
        printf("\nМинимальный элемент: %.2f\n", A[index]);
    } else {
        printf("\nУсловие не выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (fmod(A[i], 2) == 0) {
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
