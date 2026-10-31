//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №25 (вариант 25, сборник, стр. 40).
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

    int positiveCount = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            positiveCount++;
        }
    }

    if (positiveCount > 3) {
        printf("\nУсловие выполнено.\n");
        float minimum = A[0];
        for (int i = 0; i < n; i++) {
            if (A[i] < minimum) {
                minimum = A[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (A[i] == minimum) {
                A[i] = A[i] - 2;
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    } else {
        printf("\nУсловие не выполнено.\n");
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                if (index == -1 || A[i] > A[index]) {
                    index = i;
                }
            }
        }
        if (index == -1) {
            printf("\nТаких элементов нет.\n");
        } else {
            printf("\nНомер первого максимального из отрицательных элементов: %d\n", index);
        }
    }

    return 0;
}
