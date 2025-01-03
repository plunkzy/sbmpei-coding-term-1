//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №30 (условие смотрите в сборнике).
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int initial_ameba = 1;
    int hours;
    int final_hour = 24;
    int step = 3;

    printf("Часы\tКоличество амеб\n");
    printf("--------------------------\n");

    for(hours = step; hours <= final_hour; hours += step) {
        int amebas = initial_ameba * pow(2, hours / step);
        printf("%d\t%d\n", hours, amebas);
    }

    return 0;
}