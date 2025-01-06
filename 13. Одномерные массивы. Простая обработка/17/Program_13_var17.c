//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №17: "Найти массив Y(n) на основе заданного массива X(n), используя правило Yk = 0, если Xk < 0 и Yk = Xk*Xk, если Xk > 0, при этом подсчитать число элементов Xk, равных нулю.".
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
    int zeroCount = 0;

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if (choice == 2) {
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for(int i = 0; i < n; i++) {
            X[i] = (float)(rand() % 21 - 10);
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] < 0) {
            Y[i] = 0.0;
        }
        else if(X[i] > 0) {
            Y[i] = X[i] * X[i];
        }
        else {
            Y[i] = 0.0;
            zeroCount++;
        }
    }

    printf("\nМассив X:\n");
    for(int i = 0; i < n; i++) {
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    printf("\nМассив Y:\n");
    for(int i = 0; i < n; i++) {
        printf("Y[%d] = %.2f\n", i, Y[i]);
    }

    printf("\nКоличество элементов Xk, равных нулю: %d\n", zeroCount);

    return 0;
}