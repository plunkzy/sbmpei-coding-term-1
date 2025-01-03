//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №7: "Последовательно вычислить объемы N цилиндров, диаметры оснований которых имеют значения D, D+1, D+2, …, D+N-1, а высоты равны диаметрам."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    double D, diameter, radius, height, volume;
    const double PI = 3.14;

    printf("Введите количество цилиндров N: ");
    scanf("%d", &N);
    printf("Введите начальный диаметр D (см): ");
    scanf("%lf", &D);

    printf("Цилиндр\tДиаметр (см)\tВысота (см)\tОбъем (см³)\n");
    printf("-------------------------------------------------------------\n");

    for(int i = 1; i <= N; i++) {
        diameter = D + (i - 1);
        radius = diameter / 2.0;
        height = diameter;
        volume = PI * radius * radius * height;
        printf("%d\t%.2lf\t\t%.2lf\t\t%.2lf\n", i, diameter, height, volume);
    }

    return 0;
}
