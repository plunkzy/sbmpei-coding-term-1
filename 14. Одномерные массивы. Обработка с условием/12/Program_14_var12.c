//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №12 (вариант 12, сборник, стр. 39).
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

    int multipleCount = 0;
    for (int i = 0; i < n; i++) {
        if (fmod(A[i], 3) == 0) {
            multipleCount++;
        }
    }

    if (multipleCount >= 2) {
        printf("\nУсловие выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (fmod(A[i], 2) == 0) {
                A[i] = A[i] - 2;
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    } else {
        printf("\nУсловие не выполнено.\n");
        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (fabs(A[i]) > fabs(A[maxIndex])) {
                maxIndex = i;
            }
        }
        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] <= A[minIndex]) {
                minIndex = i;
            }
        }
        printf("\nПолусумма максимального по модулю и последнего минимального элементов: %.2f\n", (A[maxIndex] + A[minIndex]) / 2);
    }

    return 0;
}
