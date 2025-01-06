//
// Лабораторная работа №13 "Одномерные массивы. Простая обработка".
// Решение задачи №5: "В массиве Y(n) найти по отдельности суммы и количества элементов, значения которых соответственно больше 1 и меньше -1."
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
    float sum_gt1 = 0, sum_lt_1 = 0;
    int count_gt1 = 0, count_lt_1 = 0;

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
            Y[i] = ((float)(rand() % 101) - 50) / 10;
            printf("Y[%d] = %.2f\n", i, Y[i]);
        }
    }
    else{
        printf("Некорректный выбор способа ввода.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        if(Y[i] > 1.0){
            sum_gt1 += Y[i];
            count_gt1++;
        }
        if(Y[i] < -1.0){
            sum_lt_1 += Y[i];
            count_lt_1++;
        }
    }

    printf("\nСумма элементов больше 1: %.2f\n", sum_gt1);
    printf("Количество элементов больше 1: %d\n", count_gt1);
    printf("Сумма элементов меньше -1: %.2f\n", sum_lt_1);
    printf("Количество элементов меньше -1: %d\n", count_lt_1);

    return 0;
}
