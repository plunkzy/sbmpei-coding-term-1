//
// Лабораторная работа №1 "Линейные алгоритмы".
// Решение задачи №9: "Дана длина ребра куба. Найти площадь грани, площадь полной поверхности и объем этого куба."
// Опубликовано 01.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double outRadius, inRadius, area;

    printf("Введите внешний радиус кольца: ");
    scanf("%lf", &outRadius);

    printf("Введите внутренний радиус кольца: ");
    scanf("%lf", &inRadius);

    area = 3.14 * (outRadius * outRadius - inRadius * inRadius);

    printf("Площадь кольца: %lf\n", area);

    return 0;
}
