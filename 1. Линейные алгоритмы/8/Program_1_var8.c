//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №8: "Найти длину окружности и площадь круга заданного радиуса. В качества значения π использовать 3.14."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double radius, length, area;
    const double pi = 3.14;

    printf("Введите радиус круга: ");
    scanf("%lf", &radius);

    length = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Длина окружности: %.2lf\n", length);
    printf("Площадь круга: %.2lf\n", area);

    return 0;
}
