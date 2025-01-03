//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №11: "Для фигур: равностороннего треугольника, квадрата, правильных 5-угольника, 6-угольника, …, N-угольника дана длина стороны А (одна и та же). Вычислить площади S этих геометрических фигур."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double A, S;
    int N;

    printf("Введите длину стороны A (см): ");
    scanf("%lf", &A);
    printf("Введите количество сторон N (>=3): ");
    scanf("%d", &N);

    printf("Фигура\tКоличество сторон\tПлощадь (см²)\n");
    printf("---------------------------------------------------\n");

    for(int sides = 3; sides <= N; sides++) {
        double area;
        if(sides < 3) {
            printf("Фигура с %d сторонами не существует.\n", sides);
            continue;
        }
        double apothem = A / (2 * tan(M_PI / sides));
        area = (sides * A * apothem) / 2.0;
        printf("%d-угольник\t%d\t\t\t%.2lf\n", sides, sides, area);
    }

    return 0;
}
