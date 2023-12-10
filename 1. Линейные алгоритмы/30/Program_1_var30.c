//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №30: "Найти площадь треугольника по длинам его сторон. Использовать формулу Герона."
// Опубликовано 10.12.2023
// plunkzy education (by Voppor41)
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float a, b, c, p, s;

    printf("Введите длины сторон треугольника.\n");
    printf("Длина первой стороны: ");
    scanf("%f", &a);
    printf("Длина второй стороны: ");
    scanf("%f", &b);
    printf("Длина третьей стороны: ");
    scanf("%f", &c);

    p = (a + b + c) / 2;
    s = powf(p * (p - a) * (p - b) * (p - c), 1.0 / 2.0);

    printf("Площадь треугольника = %f", s);

    return 0;
}