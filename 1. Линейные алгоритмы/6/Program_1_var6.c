//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №6: "Найти периметр и площадь прямоугольного треугольника, если даны длины его катетов."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a, b;
    printf("Введите длины катетов a и b: ");
    scanf("%lf %lf", &a, &b);

    double perimeter = a + b + sqrt(a * a + b * b);
    double area = (a * b) / 2;

    printf("Периметр треугольника: %lf\n", perimeter);
    printf("Площадь треугольника: %lf\n", area);

    return 0;
}
