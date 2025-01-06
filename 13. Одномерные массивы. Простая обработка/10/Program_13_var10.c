//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №10: "В массиве X(n) подсчитать количество отрицательных элементов, и изменить значение каждого положительного элемента путем его деления на значение последующего члена. Элемент Xₙ полагать заведомо отрицательным."
// Опубликовано 06.01.2024
// plunkzy education
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n, choice;
    int negative_count = 0;

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
        X[n-1] = -fabs(X[n-1]);
    }
    else if(choice == 2){
        srand(time(NULL));
        printf("Сгенерированный массив X:\n");
        for(int i = 0; i < n; i++){
            X[i] = ((float)(rand() % 201) - 100) / 10;
            printf("X[%d] = %.2f\n", i, X[i]);
        }
        X[n-1] = -fabs(X[n-1]);
        printf("X[%d] (последний элемент) установлен как отрицательный: %.2f\n", n-1, X[n-1]);
    }
    else{
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        if(X[i] < 0){
            negative_count++;
        }
        else{
            if(i < n-1){
                if(X[i+1] != 0){
                    X[i] = X[i] / X[i+1];
                }
                else{
                    printf("Предупреждение: деление на ноль для элемента X[%d]. Значение не изменено.\n", i);
                }
            }
            else{
                X[i] = X[i];
            }
        }
    }

    printf("\nКоличество отрицательных элементов: %d\n", negative_count);
    printf("Измененный массив X:\n");
    for(int i = 0; i < n; i++){
        printf("X[%d] = %.2f\n", i, X[i]);
    }

    return 0;
}