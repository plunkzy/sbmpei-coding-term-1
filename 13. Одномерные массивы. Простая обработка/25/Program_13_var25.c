//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №25: "Найти произведения четных и нечетных элементов массива X(n), подсчитать количество отрицательных значений четных элементов и количество положительных значений нечетных элементов того же массива.".
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
    float productEven = 1.0, productOdd = 1.0;
    int countNegativeEven = 0, countPositiveOdd = 0;

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if(choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for(int i = 0; i < n; i++) {
            X[i] = ((float)(rand() % 201 - 100)) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода массива X.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if((i + 1) % 2 == 0) {
            productEven *= X[i];
            if(X[i] < 0) {
                countNegativeEven++;
            }
        }
        else {
            productOdd *= X[i];
            if(X[i] > 0) {
                countPositiveOdd++;
            }
        }
    }

    printf("\nПроизведение четных элементов: %.2f\n", productEven);
    printf("Произведение нечетных элементов: %.2f\n", productOdd);
    printf("Количество отрицательных четных элементов: %d\n", countNegativeEven);
    printf("Количество положительных нечетных элементов: %d\n", countPositiveOdd);

    return 0;
}