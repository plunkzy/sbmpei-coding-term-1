/
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №29: "Даны размеры офисного помещения (длина и ширина). Определить, сколько рабочих мест можно разместить в офисе, если известно, что одному сотруднику для комфортной работы нужно пространство размером 2×1.5 метра."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double office_length, office_width;
    double workspace_length = 2.0;
    double workspace_width = 1.5;
    int count1, count2;
    int total;

    printf("Введите длину и ширину офисного помещения (в метрах): ");
    scanf("%lf %lf", &office_length, &office_width);

    // Способ 1: рабочее место по длине помещения
    count1 = floor(office_length / workspace_length) * floor(office_width / workspace_width);

    // Способ 2: рабочее место по ширине помещения
    count2 = floor(office_length / workspace_width) * floor(office_width / workspace_length);

    // Выбор максимального количества рабочих мест
    if(count1 > count2) {
        total = count1;
    } else {
        total = count2;
    }

    printf("Максимальное количество рабочих мест: %d\n", total);

    return 0;
}