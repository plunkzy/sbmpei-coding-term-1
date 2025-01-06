//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №9: "В массиве X(n) найти сумму и число тех элементов, каждый из которых, во-первых, больше элемента с тем же номером из массива Y(n), а во-вторых, положителен."
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
    float sum = 0;
    int count = 0;

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n];

    // Ввод массива X
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

    // Ввод массива Y
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
        if(X[i] > Y[i] && X[i] > 0){
            sum += X[i];
            count++;
        }
    }

    printf("\nСумма элементов X, превышающих соответствующие элементы Y и положительных: %.2f\n", sum);
    printf("Количество таких элементов: %d\n", count);

    return 0;
}