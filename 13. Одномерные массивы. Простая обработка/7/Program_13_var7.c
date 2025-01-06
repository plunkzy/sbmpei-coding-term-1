//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №7: "В массивах X(n) и Y(n), проверяя на равенство элементы пар (X₁, Y₁), (X₂, Y₂), ..., (Xₙ, Yₙ), подсчитать число случаев равенства элементов пары. Одновременно найти среднее арифметическое массива X(n)."
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
    float sum_X = 0;
    int equal_count = 0;

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n];

    printf("Выберите способ ввода массива X (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Введите элементы массива X:\n");
        for(int i = 0; i < n; i++){
            printf("X[%d] = ", i);
            scanf("%f", &X[i]);
        }
    }
    else if(choice == 2){
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for(int i = 0; i < n; i++){
            // Генерация чисел от -10.0 до 10.0
            X[i] = ((float)(rand() % 201) - 100) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода массива X.\n");
        return 1;
    }

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++){
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if(choice == 2){
        srand(time(NULL) + 1);
        printf("Сгенерированный массив Y:\n");
        for(int i = 0; i < n; i++){
            Y[i] = ((float)(rand() % 201) - 100) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода массива Y.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        sum_X += X[i];
        if(X[i] == Y[i]){
            equal_count++;
        }
    }

    float average_X = sum_X / n;

    printf("\nКоличество пар элементов, равных друг другу: %d\n", equal_count);
    printf("Среднее арифметическое массива X: %.2f\n", average_X);

    return 0;
}
