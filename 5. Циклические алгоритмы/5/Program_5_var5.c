//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №5: "Найти расстояние от начала координат до каждой из N точек плоскости XOY, имеющих абсциссы Х=2, 4, 6, …, 2N см и расположенных на прямой Y=Ax+B (коэффициенты А и В считать заданными)."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double A, B;
    int N;

    printf("Введите коэффициенты A и B для уравнения Y = Ax + B: ");
    scanf("%lf %lf", &A, &B);
    printf("Введите количество точек N: ");
    scanf("%d", &N);

    printf("Точка\tX\tY\tРасстояние от начала координат\n");
    printf("-------------------------------------------------\n");

    for(int i = 1; i <= N; i++) {
        double X = 2.0 * i;
        double Y = A * X + B;
        double distance = sqrt(X * X + Y * Y);
        printf("%d\t%.2lf\t%.2lf\t%.2lf см\n", i, X, Y, distance);
    }

    return 0;
}