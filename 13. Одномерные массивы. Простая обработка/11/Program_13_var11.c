//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №11: "В массивах X(n) и Y(n) заменить значение каждого неположительного элемента массива X(n) их абсолютными величинами соответствующего (по номеру) элемента массива Y(n) и подсчитать количество замен."
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    int replace_count = 0;

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
        if(X[i] <= 0){
            X[i] = fabs(Y[i]);
            replace_count++;
        }
    }

    printf("\nКоличество замен: %d\n", replace_count);
    printf("Измененный массив X:\n");
    for(int i = 0; i < n; i++){
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    return 0;
}