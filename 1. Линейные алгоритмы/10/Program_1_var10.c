//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №10 (условие смотрите в сборнике).
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double side, area;

    printf("Введите длину стороны равностороннего треугольника: ");
    scanf("%lf", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("Площадь треугольника: %lf\n", area);

    return 0;
}
