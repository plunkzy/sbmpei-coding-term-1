//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №28: "Даны основания и высота равнобедренной трапеции. Найти ее периметр и площадь"
// Опубликовано 23.03.2024
// plunkzy education (by plunkzy)
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, h, perimeter, area;

    printf("Введите длину меньшего основания трапеции: ");
    scanf("%lf", &a);

    printf("Введите длину большего основания трапеции: ");
    scanf("%lf", &b);

    printf("Введите высоту трапеции: ");
    scanf("%lf", &h);

    perimeter = a + b + 2 * sqrt(h * h + (b - a) * (b - a) / 4);
    area = (a + b) * h / 2;

    printf("Периметр равнобедренной трапеции с основаниями %.2lf и %.2lf и высотой %.2lf равен %.2lf\n", a, b, h, perimeter);
    printf("Площадь равнобедренной трапеции с основаниями %.2lf и %.2lf и высотой %.2lf равна %.2lf\n", a, b, h, area);

    return 0;
}