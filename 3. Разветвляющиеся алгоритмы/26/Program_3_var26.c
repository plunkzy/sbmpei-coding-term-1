//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №26: "Дана сторона квадрата и радиус окружности. Определить, можно ли вписать квадрат в окружность и наоборот."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double side, radius;
    double diagonal, diameter;

    printf("Введите сторону квадрата и радиус окружности: ");
    scanf("%lf %lf", &side, &radius);

    diagonal = side * sqrt(2);
    diameter = 2 * radius;

    // Проверка, можно ли вписать квадрат в окружность
    if(diagonal <= diameter) {
        printf("Квадрат можно вписать в окружность.\n");
    } else {
        printf("Квадрат нельзя вписать в окружность.\n");
    }

    // Проверка, можно ли вписать окружность в квадрат
    if(diameter <= side) {
        printf("Окружность можно вписать в квадрат.\n");
    } else {
        printf("Окружность нельзя вписать в квадрат.\n");
    }

    return 0;
}
