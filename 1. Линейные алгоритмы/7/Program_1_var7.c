//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №7: "Дана длина ребра куба. Найти площадь грани, площадь полной поверхности и объем этого куба."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a;
    printf("Введите длину ребра куба: ");
    scanf("%lf", &a);

    double surface = a * a;
    double totalSurface = 6 * surface;
    double volume = a * a * a;

    printf("Площадь грани куба: %lf\n", surface);
    printf("Площадь полной поверхности куба: %lf\n", totalSurface);
    printf("Объем куба: %lf\n", volume);

    return 0;
}