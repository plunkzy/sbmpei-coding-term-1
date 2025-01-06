//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №1: "Найти сумму и количество тех элементов массива X(n), которые больше величины P, но меньше другой величины T (P < T)."
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
    float P, T, sum = 0;
    int count = 0;

    printf("Введите значения P и T (P < T): ");
    scanf("%f %f", &P, &T);
    if (P >= T) {
        printf("Ошибка: P должно быть меньше T.\n");
        return 1;
    }

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
            X[i] = (float)(rand() % 100) / 10; // Генерация чисел от 0.0 до 9.9
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    } else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (X[i] > P && X[i] < T) {
            sum += X[i];
            count++;
        }
    }

    printf("\nСумма элементов, удовлетворяющих условию: %.2f\n", sum);
    printf("Количество элементов, удовлетворяющих условию: %d\n", count);

    return 0;
}