//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №24: "Найти среднее арифметическое не равных нулю элементов массива X(n) и подсчитать количество элементов с неположительными значениями.".
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
    float sum = 0.0;
    int countNonZero = 0;
    int countNonPositive = 0;

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
        if(X[i] != 0.0) {
            sum += X[i];
            countNonZero++;
        }
        if(X[i] <= 0.0) {
            countNonPositive++;
        }
    }

    float average = 0.0;
    if(countNonZero > 0) {
        average = sum / countNonZero;
    }

    printf("\nСреднее арифметическое не равных нулю элементов массива X: %.2f\n", average);
    printf("Количество элементов с неположительными значениями: %d\n", countNonPositive);

    return 0;
}