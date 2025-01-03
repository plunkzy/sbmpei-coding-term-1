//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №21: "Заданы длины диагоналей четырехугольника и угол между ними. Определить вид этого четырехугольника."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double d1, d2, angle_deg;
    double angle_rad, area;
    double a, b, c, d;

    printf("Введите длины диагоналей (d1 d2) и угол между ними в градусах: ");
    scanf("%lf %lf %lf", &d1, &d2, &angle_deg);

    angle_rad = angle_deg * M_PI / 180.0; // Переводим угол в радианы
    area = (d1 * d2 * sin(angle_rad)) / 2.0; // Вычисляем площадь четырехугольника

    // Определение вида четырехугольника
    if (fabs(angle_deg - 90.0) < 1e-6) {
        printf("Четырехугольник является прямоугольником.\n");
    } else if (fabs(d1 - d2) < 1e-6 && fabs(angle_deg - 90.0) < 1e-6) {
        printf("Четырехугольник является квадратом.\n");
    } else {
        printf("Четырехугольник является произвольным.\n");
    }

    return 0;
}