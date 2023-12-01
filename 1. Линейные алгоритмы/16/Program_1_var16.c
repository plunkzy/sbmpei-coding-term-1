//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №16: "Даны координаты трех вершин треугольника (X1, Y1), (X2, Y2), (X3, Y3). Найти его периметр и площадь."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double X1, Y1, X2, Y2, X3, Y3;
    double sideA, sideB, sideC, perimeter, semiPerimeter, area;

    printf("Введите координаты точки 1 (X1 Y1): ");
    scanf("%lf %lf", &X1, &Y1);

    printf("Введите координаты точки 2 (X2 Y2): ");
    scanf("%lf %lf", &X2, &Y2);

    printf("Введите координаты точки 3 (X3 Y3): ");
    scanf("%lf %lf", &X3, &Y3);

    sideA = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    sideB = sqrt(pow(X3 - X2, 2) + pow(Y3 - Y2, 2));
    sideC = sqrt(pow(X1 - X3, 2) + pow(Y1 - Y3, 2));

    perimeter = sideA + sideB + sideC;
    semiPerimeter = perimeter / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

    printf("Периметр треугольника: %lf\n", perimeter);
    printf("Площадь треугольника: %lf\n", area);

    return 0;
}
