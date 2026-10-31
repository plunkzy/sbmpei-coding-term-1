//
// Лабораторная работа №14 "Одномерные массивы. Обработка с условием".
// Решение задачи №13 (вариант 13, сборник, стр. 39).
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

    int noNegative = 1;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            noNegative = 0;
        }
    }

    if (noNegative) {
        printf("\nУсловие выполнено.\n");
        for (int i = 0; i < n; i++) {
            if (fmod(A[i], 5) == 0) {
                A[i] = 0;
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
            if (A[i] > 0) {
                if (index == -1 || A[i] <= A[index]) {
                    index = i;
                }
            }
        }
        if (index == -1) {
            printf("\nТаких элементов нет.\n");
        } else {
            printf("\nПоследний минимальный из положительных элементов: %.2f\n", A[index]);
            printf("Его номер: %d\n", index);
        }
    }

    return 0;
}
