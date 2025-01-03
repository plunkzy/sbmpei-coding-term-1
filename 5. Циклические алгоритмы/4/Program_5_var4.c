//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №4 (условие смотрите в сборнике).
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double R, H;
    int N;
    double volume_inner, volume_outer, volume_layer;
    const double PI = 3.14;

    printf("Введите внутренний радиус R (м): ");
    scanf("%lf", &R);
    printf("Введите толщину слоя H (м): ");
    scanf("%lf", &H);
    printf("Введите количество слоев N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        volume_inner = (4.0 / 3.0) * PI * pow(R + H * (i - 1), 3);
        volume_outer = (4.0 / 3.0) * PI * pow(R + H * i, 3);
        volume_layer = volume_outer - volume_inner;
        printf("Объем %d-го слоя: %.6lf м³\n", i, volume_layer);
    }

    return 0;
}
