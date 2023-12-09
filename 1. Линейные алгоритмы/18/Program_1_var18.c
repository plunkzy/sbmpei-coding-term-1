//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №18: "Даны координаты выпуклого четырехугольника (X1, Y1), (X2, Y2), (X3, Y3), (X4, Y4). Найти его периметр и площадь."
// Опубликовано 09.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutpurCP(UTF_8);
    float x1, y1, x2, y2, x3, y3, x4, y4;

    printf("Введите координаты точек четырехугольника.\n");
    printf("Введите координаты первой точки (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Введите координаты второй точки (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Введите координаты третьей точки (x3, y3): ");
    scanf("%f %f", &x3, &y3);
    printf("Введите координаты четвёртой точки (x4, y4): ");
    scanf("%f %f", &x4, &y4);

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    double side4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    double perimeter = side1 + side2 + side3 + side4;

    double diagonal1 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double diagonal2 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
    double s1 = (side1 + side2 + diagonal1) / 2;
    double s2 = (side3 + side4 + diagonal2) / 2;
    double area1 = sqrt(s1 * (s1 - side1) * (s1 - side2) * (s1 - diagonal1));
    double area2 = sqrt(s2 * (s2 - side3) * (s2 - side4) * (s2 - diagonal2));
    double totalArea = area1 + area2;

    printf("Периметр четырехугольника: %.2f\n", perimeter);
    printf("Площадь четырехугольника: %.2f\n", totalArea);

    return 0;
}
