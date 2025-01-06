//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №29: "В массиве Y(n) найти среднее арифметическое положительных элементов, имеющих нечетные номера.".
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
    float sum = 0.0;
    int count = 0;

    printf("Введите размер массива Y: ");
    scanf("%d", &n);

    float Y[n];

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if(choice == 2) {
        srand(time(NULL));
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
        if(((i + 1) % 2 != 0) && (Y[i] > 0)) {
            sum += Y[i];
            count++;
        }
    }

    float average = 0.0;
    if(count > 0) {
        average = sum / count;
    }

    printf("\nСреднее арифметическое положительных элементов с нечетными номерами: %.2f\n", average);
    printf("Количество таких элементов: %d\n", count);

    return 0;
}