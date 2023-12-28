//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №7: "Если все три введенных числа неотрицательны, то найти наименьшее число, иначе – уменьшить каждое число вдвое".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a, b, c;

    printf("Введите три числа: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= 0 && b >= 0 && c >= 0) {
        double min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
        printf("Наименьшее число: %f\n", min);
    } else {
        printf("Результат: %f, %f, %f\n", a / 2.0, b / 2.0, c / 2.0);
    }

    return 0;
}
