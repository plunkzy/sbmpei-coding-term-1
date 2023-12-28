//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №2: "Три точки на плоскости заданы своими координатами. Между какими точками расстояние наименьшее?".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int x1, y1, x2, y2, x3, y3;

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

    double d12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double d23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double d13 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (d12 <= d23 && d12 <= d13) {
        printf("Наименьшее расстояние между точками 1 и 2.\n");
    } else if (d23 <= d12 && d23 <= d13) {
        printf("Наименьшее расстояние между точками 2 и 3.\n");
    } else {
        printf("Наименьшее расстояние между точками 1 и 3.\n");
    }

    return 0;
}
