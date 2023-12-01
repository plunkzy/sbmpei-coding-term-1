//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №11 (условие смотрите в сборнике).
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double length, area;

    printf("Введите длину окружности: ");
    scanf("%lf", &length);

    double radius = length / (2 * 3.14);
    area = 3.14 * radius * radius;

    printf("Площадь круга: %lf\n", area);

    return 0;
}
