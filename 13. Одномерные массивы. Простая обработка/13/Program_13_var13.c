//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №13: "В массиве X(n) заменить значения отрицательных элементов их абсолютными величинами, при этом подсчитать число элементов, равных нулю."
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
    int zero_count = 0;

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
            X[i] = ((float)(rand() % 201) - 100) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода массива X.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if(X[i] < 0){
            X[i] = fabs(X[i]);
        }
        if(X[i] == 0){
            zero_count++;
        }
    }

    printf("\nКоличество элементов, равных нулю: %d\n", zero_count);
    printf("Измененный массив X:\n");
    for(int i = 0; i < n; i++){
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    return 0;
}
