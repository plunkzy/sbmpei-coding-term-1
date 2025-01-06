//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №27: "При заданных массивах X(n), Y(n) найти массив T(n), элементы которого получают значения по правилу Tk = min(Xk, Yk), и подсчитать, сколько элементов Tk получило значение Xk.".
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choiceX, choiceY;
    int countMinFromX = 0;

    printf("Введите размер массивов X, Y и T: ");
    scanf("%d", &n);

    float X[n], Y[n], T[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choiceX);

    if(choiceX == 1) {
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++) {
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if(choiceX == 2) {
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

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choiceY);

    if(choiceY == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if(choiceY == 2) {
        srand(time(NULL) + 1);
        printf("Сгенерированный массив Y:\n");
        for(int i = 0; i < n; i++) {
            Y[i] = ((float)(rand() % 201 - 100)) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else {
        printf("Некорректный выбор способа ввода массива Y.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(X[i] < Y[i]) {
            T[i] = X[i];
            countMinFromX++;
        }
        else {
            T[i] = Y[i];
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

    printf("\nМассив T (min(Xk, Yk)):\n");
    for(int i = 0; i < n; i++) {
        printf("T[%d] = %.2f\n", i, T[i]);
    }

    printf("\nКоличество элементов Tk, получивших значение из массива X: %d\n", countMinFromX);

    return 0;
}