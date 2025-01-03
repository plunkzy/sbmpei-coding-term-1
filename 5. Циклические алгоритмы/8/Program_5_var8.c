//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №8: "Найти расстояние R от точки с абсциссой X1 и ординатой Y1 до каждой из точек плоскости XOY, имеющих абсциссу Х=1, 2, 3, …, N и ординату Y=0."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double X1, Y1, R;
    int N;

    printf("Введите координаты точки (X1 Y1): ");
    scanf("%lf %lf", &X1, &Y1);
    printf("Введите количество точек N: ");
    scanf("%d", &N);

    printf("Точка\tX\tY\tРасстояние R (см)\n");
    printf("-------------------------------------------\n");

    for(int i = 1; i <= N; i++) {
        double X = (double)i;
        double Y = 0.0;
        R = sqrt((X1 - X) * (X1 - X) + (Y1 - Y) * (Y1 - Y));
        printf("%d\t%.2lf\t%.2lf\t%.2lf\n", i, X, Y, R);
    }

    return 0;
}
