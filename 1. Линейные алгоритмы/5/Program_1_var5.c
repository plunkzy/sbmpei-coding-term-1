//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №5 (условие смотрите в сборнике).
// Опубликовано 30.11.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double V, V2, S, T;

    printf("Введите скорость первого автомобиля (V): ");
    scanf("%lf", &V);
    printf("Введите скорость второго автомобиля (V2): ");
    scanf("%lf", &V2);
    printf("Введите начальное расстояние между автомобилями (S): ");
    scanf("%lf", &S);
    printf("Введите время в часах (T): ");
    scanf("%lf", &T);

    double distance = S - (V + V2) * T;
    printf("Расстояние между автомобилями через %lf часов будет: %lf км\n", T, distance);

    return 0;
}
