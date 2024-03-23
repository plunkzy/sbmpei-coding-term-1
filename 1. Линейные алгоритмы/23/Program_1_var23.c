//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №23: "Вычислить площадь поверхности цилиндра. Радиус основания и высота вводятся с клавиатуры."
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double radius, height, surface, PI = 3.14;

    printf("Введите радиус основания цилиндра: ");
    scanf("%lf", &radius);

    printf("Введите высоту цилиндра: ");
    scanf("%lf", &height);

    surface = 2 * PI * radius * (radius + height);

    printf("Площадь поверхности цилиндра с радиусом %.2lf и высотой %.2lf равна %.2lf\n", radius, height, surface);

    return 0;
}