//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №12: "Дана площадь круга. Найти длину окружности, ограничивающей этот круг. В качества значения π использовать 3.14."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double area, length;

    printf("Введите площадь круга: ");
    scanf("%lf", &area);

    double radius = sqrt(area / 3.14);
    length = 2 * 3.14 * radius;

    printf("Длина окружности: %lf\n", length);

    return 0;
}
