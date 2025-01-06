//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №12: "При заданных массивах X(n) и Y(n) найти массив T(n), элементы которого получают значения по правилу Tk = max(Xk, Yk), и подсчитать, сколько элементов Tk получило значение Xk."
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    int X_max_count = 0;

    printf("Введите размер массивов X и Y: ");
    scanf("%d", &n);

    float X[n], Y[n], T[n];

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

            X[i] = ((float)(rand() % 401) - 200) / 10;
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
            Y[i] = ((float)(rand() % 401) - 200) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода массива Y.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if(X[i] >= Y[i]){
            T[i] = X[i];
            X_max_count++;
        }
        else{
            T[i] = Y[i];
        }
    }

    printf("\nМассив T:\n");
    for(int i = 0; i < n; i++){
        printf("T[%d] = %.2f\n", i, T[i]);
    }

    printf("\nКоличество элементов T, получивших значение из массива X: %d\n", X_max_count);

    return 0;
}