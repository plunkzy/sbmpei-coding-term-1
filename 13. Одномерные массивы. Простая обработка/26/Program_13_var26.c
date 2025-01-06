//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №26: "В заданном массиве X(n) найти отношение A/B, где A – произведение всех элементов массива, а B – их сумма.".
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
    float A = 1.0, B = 0.0;
    int zeroInArray = 0;

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
        B += X[i];
        A *= X[i];
        if(X[i] == 0.0) {
            zeroInArray = 1;
        }
    }

    if(B == 0.0) {
        printf("\nСумма элементов массива равна нулю. Отношение A/B не определено.\n");
    }
    else {
        float ratio = A / B;
        printf("\nОтношение A/B = %.2f\n", ratio);
    }

    return 0;
}