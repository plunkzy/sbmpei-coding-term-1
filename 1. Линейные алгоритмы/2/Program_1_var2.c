//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №2: "Даны два числа. Найти среднее арифметическое их квадратов и среднее арифметическое их модулей."
// Опубликовано 30.11.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double num1, num2, averageOfSquares, averageOfAbs;

    printf("Введите два числа: ");
    scanf("%lf %lf", &num1, &num2);

    averageOfSquares = (pow(num1, 2) + pow(num2, 2)) / 2;
    averageOfAbs = (fabs(num1) + fabs(num2)) / 2;

    printf("Среднее арифметическое квадратов: %lf\n", averageOfSquares);
    printf("Среднее арифметическое модулей: %lf\n", averageOfAbs);

    return 0;
}
