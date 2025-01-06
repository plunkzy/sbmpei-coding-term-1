//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №2: "Подсчитать по отдельности суммы С1 и С2 и количества М1 и М2 отрицательных и положительных элементов заданного массива X(n)."
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
    float X_sum_neg = 0, X_sum_pos = 0;
    int X_count_neg = 0, X_count_pos = 0;

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива X:\n");
        for (int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    } else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for (int i = 0; i < n; i++) {
            X[i] = ((float)(rand() % 201) - 100) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    } else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (X[i] < 0) {
            X_sum_neg += X[i];
            X_count_neg++;
        } else if (X[i] > 0) {
            X_sum_pos += X[i];
            X_count_pos++;
        }
    }

    printf("\nСумма отрицательных элементов (С1): %.2f\n", X_sum_neg);
    printf("Количество отрицательных элементов (М1): %d\n", X_count_neg);
    printf("Сумма положительных элементов (С2): %.2f\n", X_sum_pos);
    printf("Количество положительных элементов (М2): %d\n", X_count_pos);

    return 0;
}