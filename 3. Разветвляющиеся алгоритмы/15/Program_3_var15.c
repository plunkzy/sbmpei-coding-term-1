//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №15: "Три точки на плоскости заданы своими координатами. Какая точка находится на наибольшем расстоянии от начала координат."
// Опубликовано 28.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x1, y1, x2, y2, x3, y3;

    printf("Введите координаты первой точки (x1, y1): ");
    if (scanf("%lf %lf", &x1, &y1) != 2) {
        printf("Введённые данные не являются числами.\n");
        getchar();
        return 1;
    }

    printf("Введите координаты второй точки (x2, y2): ");
    if (scanf("%lf %lf", &x2, &y2) != 2) {
        printf("Введённые данные не являются числами.\n");
        getchar();
        return 1;
    }

    printf("Введите координаты третьей точки (x3, y3): ");
    if (scanf("%lf %lf", &x3, &y3) != 2) {
        printf("Введённые данные не являются числами.\n");
        getchar();
        return 1;
    }

    double distance1 = sqrt(x1 * x1 + y1 * y1);
    double distance2 = sqrt(x2 * x2 + y2 * y2);
    double distance3 = sqrt(x3 * x3 + y3 * y3);

    if (distance1 >= distance2 && distance1 >= distance3) {
        printf("Точка (x1, y1) находится на наибольшем расстоянии.\n");
    } else if (distance2 >= distance1 && distance2 >= distance3) {
        printf("Точка (x2, y2) находится на наибольшем расстоянии.\n");
    } else {
        printf("Точка (x3, y3) находится на наибольшем расстоянии.\n");
    }

    getchar();
    return 0;
}