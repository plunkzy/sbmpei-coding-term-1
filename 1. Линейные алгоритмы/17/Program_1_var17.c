//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №17: "Найти корни квадратного уравнения A*X^2+B^X+C=0"
// Опубликовано 07.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double A, B, C, D, X1, X2;
    printf("Введите коэффициент А: ");
    scanf("%lf", &A);
    printf("Введите коэффициент B: ");
    scanf("%lf", &B);
    printf("Введите коэффициент C: ");
    scanf("%lf", &C);
    D = B * B - 4 * A * C;
    if (D < 0) {
        printf("Корней у квадратного уравнения нет.");
    } else if (D == 0) {
        X1 = -B / 2*A;
        printf("У квадратного уравнения один корень: X = %lf", X1);
    } else {
        X1 = (-B + sqrt(D)) / 2*A;
        X2 = (-B - sqrt(D)) / 2*A;
        printf("У квадратного уравнения два корня: X1 = %lf, X2 = %lf", X1, X2);
    }
    return 0;
}