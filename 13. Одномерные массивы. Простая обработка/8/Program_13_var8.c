//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №8: "В массиве X(n) найти среднее геометрическое тех элементов, квадраты которых не превышают заданную величину A."
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    float A, product = 1;
    int count = 0;

    printf("Введите величину A: ");
    scanf("%f", &A);

    printf("Введите размер массива X: ");
    scanf("%d", &n);

    float X[n];

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
            X[i] = ((float)(rand() % 100) + 1) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if((X[i] * X[i]) <= A){
            product *= X[i];
            count++;
        }
    }

    if(count > 0){
        float geometric_mean = pow(product, 1.0 / count);
        printf("\nСреднее геометрическое элементов, квадраты которых не превышают %.2f: %.2f\n", A, geometric_mean);
    }
    else{
        printf("\nНет элементов, квадраты которых не превышают %.2f.\n", A);
    }

    return 0;
}