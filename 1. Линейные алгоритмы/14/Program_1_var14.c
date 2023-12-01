//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №14: "Найти периметр и площадь прямоугольной трапеции с основаниями A и B и острым углом α (угол дан в радианах)."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double A, B, alpha, perimeter, area, height, sideC, sideD;

    printf("Введите длину большего основания A: ");
    scanf("%lf", &A);

    printf("Введите длину меньшего основания B: ");
    scanf("%lf", &B);

    printf("Введите угол α при большем основании в радианах: ");
    scanf("%lf", &alpha);

    height = (A - B) / tan(alpha);
    sideC = sqrt(height * height + (A - B) * (A - B));
    sideD = height / sin(alpha);
    perimeter = A + B + sideC + sideD;
    area = (A + B) / 2 * height;

    printf("Периметр трапеции: %lf\n", perimeter);
    printf("Площадь трапеции: %lf\n", area);

    return 0;
}
