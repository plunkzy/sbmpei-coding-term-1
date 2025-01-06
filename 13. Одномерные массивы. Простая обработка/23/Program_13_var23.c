//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №23: "Вычислить куб суммы и число тех элементов массива X(n), значения которых меньше заданной величины A или находятся в пределах от B до C (включая указанные границы).".
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    float A, B, C;
    float sum = 0.0;
    int count = 0;

    printf("Введите значение A: ");
    scanf("%f", &A);

    printf("Введите значения B и C (B <= C): ");
    scanf("%f %f", &B, &C);

    if(B > C) {
        printf("Некорректный ввод: B должно быть меньше или равно C.\n");
        return 1;
    }

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
        if(X[i] < A || (X[i] >= B && X[i] <= C)) {
            sum += X[i];
            count++;
        }
    }

    float cubeSum = pow(sum, 3);

    printf("\nСумма элементов, удовлетворяющих условию: %.2f\n", sum);
    printf("Куб суммы: %.2f\n", cubeSum);
    printf("Количество элементов, удовлетворяющих условию: %d\n", count);

    return 0;
}