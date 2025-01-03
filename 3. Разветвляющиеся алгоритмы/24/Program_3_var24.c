//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №24: "Ввести координаты концов двух отрезков [a, b] и [c, d] на числовой прямой. Определить взаимное расположение этих отрезков."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a, b, c, d;

    printf("Введите координаты концов первого отрезка [a b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Введите координаты концов второго отрезка [c d]: ");
    scanf("%lf %lf", &c, &d);

    // Убедимся, что a <= b и c <= d
    if(a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if(c > d) {
        double temp = c;
        c = d;
        d = temp;
    }

    // Проверка взаимного расположения отрезков
    if(b < c || d < a) {
        printf("Отрезки не пересекаются.\n");
    }
    else if(a == c && b == d) {
        printf("Отрезки совпадают.\n");
    }
    else {
        printf("Отрезки пересекаются.\n");
    }

    return 0;
}