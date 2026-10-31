//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №17 (вариант 17, сборник, стр. 39).
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
        if (fmod(A[i], 6) == 0) {
            multipleCount++;
        }
    }

    if (multipleCount > 5) {
        printf("\nУсловие выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (fmod(A[i], 2) != 0) {
                A[i] = 0;
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    } else {
        printf("\nУсловие не выполнено.\n");
        int firstPositive = -1;
        for (int i = 0; i < n && firstPositive == -1; i++) {
            if (A[i] > 0) {
                firstPositive = i;
            }
        }
        int lastNegative = -1;
        for (int i = n - 1; i >= 0 && lastNegative == -1; i--) {
            if (A[i] < 0) {
                lastNegative = i;
            }
        }
        if (firstPositive == -1 || lastNegative == -1) {
            printf("\nТаких элементов нет.\n");
        } else {
            printf("\nПолусумма первого положительного и последнего отрицательного элементов: %.2f\n", (A[firstPositive] + A[lastNegative]) / 2);
        }
    }

    return 0;
}
