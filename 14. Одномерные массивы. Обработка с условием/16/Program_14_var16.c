//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №16 (вариант 16, сборник, стр. 39).
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

    int allLess = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] >= 30) {
            allLess = 0;
        }
    }

    if (allLess) {
        printf("\nУсловие выполнено.\n");
        int index = -1;
        for (int i = 0; i < n && index == -1; i++) {
            if (A[i] < 0) {
                index = i;
            }
        }
        if (index == -1) {
            printf("\nТаких элементов нет.\n");
        } else {
            printf("\nНомер первого отрицательного элемента: %d\n", index);
        }
    } else {
        printf("\nУсловие не выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                A[i] = A[i] * A[i];
            }
        }
        printf("\nМассив после преобразования:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] = %.2f\n", i, A[i]);
        }
    }

    return 0;
}
