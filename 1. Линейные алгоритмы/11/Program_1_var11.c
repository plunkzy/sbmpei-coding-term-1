//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №11: "Дана длина окружности. Найти площадь круга, ограниченного этой окружностью. В качества значения π использовать 3.14."
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
