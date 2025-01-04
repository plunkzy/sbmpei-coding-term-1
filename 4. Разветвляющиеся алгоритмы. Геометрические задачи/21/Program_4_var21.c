//
// Лабораторная работа №4 "Разветвляющиеся алгоритмы. Геометрические задачи".
// Решение задачи №21: "Составить алгоритм и программу, проверяющую, попадает ли введенная точка с координатами (x, y) в заштрихованную фигуру."
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

    int in_square1 = (x >=0.0 && y >=0.0 && x <=3.0 && y <=3.0);
    int in_square2 = (x <=0.0 && y <=0.0 && x >=-3.0 && y >=-3.0);

    int in_circle_quarter1 = (x <=0.0 && y >=0.0 && (x * x + y * y) <=9.0);
    int in_circle_quarter2 = (x >=0.0 && y <=0.0 && (x * x + y * y) <=9.0);

    if (in_square1 || in_square2 || in_circle_quarter1 || in_circle_quarter2) {
        printf("Точка (%.2lf, %.2lf) попадает в заштрихованную область.\n", x, y);
    }
    else {
        printf("Точка (%.2lf, %.2lf) не попадает в заштрихованную область.\n", x, y);
    }

    return 0;
}