//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №4: "В массиве Y(n) найти среднее арифметическое положительных элементов, имеющих четные номера."
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

    printf("Введите размер массива Y: ");
    scanf("%d", &n);

    float Y[n];

    printf("Выберите способ ввода массива Y (1 - ручной, 2 - автоматический): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введите элементы массива Y:\n");
        for(int i = 0; i < n; i++) {
            printf("Y[%d] = ", i);
            scanf("%f", &Y[i]);
        }
    }
    else if(choice == 2){
        srand(time(NULL));
        printf("Сгенерированный массив Y:\n");
        for(int i = 0; i < n; i++) {
            // Генерация чисел от -10.0 до 10.0
            Y[i] = ((float)(rand() % 201) - 100) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && Y[i] > 0){
            sum += Y[i];
            count++;
        }
    }

    if(count > 0){
        float average = sum / count;
        printf("\nСреднее арифметическое положительных элементов с четными номерами: %.2f\n", average);
    }
    else{
        printf("\nНет положительных элементов с четными номерами.\n");
    }

    return 0;
}