//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №15: "Найти расстояние между двумя точками с заданными координатами (X1, Y1) и (X2, Y2)"
// Опубликовано 28.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    double X1, Y1, X2, Y2, distance;
    printf("Введите координаты точки 1 (X1 Y1):");
    scanf("%lf %lf", &X1, &Y1);
    printf("Введите координаты точки 2 (X2 Y2):");
    scanf("%lf %lf", &X2, &Y2);

    distance = sqrt((X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1));
    printf("Расстояние между точками: %lf", distance);
    getchar();
    return 0;
}