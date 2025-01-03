//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №27: "Ввести четыре числа. Проверить, образуют ли они геометрическую прогрессию."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c, d;
    double ratio1, ratio2, ratio3;

    printf("Введите четыре числа (a b c d): ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if(a == 0 || b == 0 || c == 0) {
        printf("Невозможно определить прогрессию из-за нулевых членов.\n");
        return 1;
    }

    ratio1 = b / a;
    ratio2 = c / b;
    ratio3 = d / c;

    if(fabs(ratio1 - ratio2) < 1e-6 && fabs(ratio2 - ratio3) < 1e-6) {
        printf("Числа образуют геометрическую прогрессию с коэффициентом %.2lf.\n", ratio1);
    } else {
        printf("Числа не образуют геометрическую прогрессию.\n");
    }

    return 0;
}