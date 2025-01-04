//
// Лабораторная работа №4 "Разветвляющиеся алгоритмы. Геометрические задачи".
// Решение задачи №11: "Составить алгоритм и программу, проверяющую, попадает ли введенная точка с координатами (x, y) в заштрихованную фигуру."
// Опубликовано 05.01.2024
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x, y;

    printf("Введите координату x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Некорректный ввод.\n");
        getchar();
        return 1;
    }
    printf("Введите координату y: ");
    if (scanf("%lf", &y) != 1) {
        printf("Некорректный ввод.\n");
        getchar();
        return 1;
    }

    if (((pow(x / 3.0, 2) + pow(y / 1.0, 2)) <= 1.0) &&
        ((pow(x, 2) + pow(y, 2)) <= 4.0)) {
        printf("Точка (%.2lf, %.2lf) попадает в заштрихованную область.\n", x, y);
    } else {
        printf("Точка (%.2lf, %.2lf) не попадает в заштрихованную область.\n", x, y);
    }

    return 0;
}