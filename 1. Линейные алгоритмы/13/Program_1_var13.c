//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №13: "Найти периметр и площадь равнобедренной трапеции с основаниями A и B и углом α при большем основании (угол дан в радианах)."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double A, B, alpha, perimeter, area, height, side;

    printf("Введите длину большего основания (A): ");
    scanf("%lf", &A);

    printf("Введите длину меньшего основания (B): ");
    scanf("%lf", &B);

    printf("Введите угол α при большем основании в радианах: ");
    scanf("%lf", &alpha);

    height = (A - B) / 2 * tan(alpha);
    side = sqrt(height * height + (A - B) / 2 * (A - B) / 2);
    perimeter = A + B + 2 * side;
    area = (A + B) / 2 * height;

    printf("Периметр трапеции: %lf\n", perimeter);
    printf("Площадь трапеции: %lf\n", area);

    return 0;
}
