//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №1: "Если максимальное значение из трех введенных чисел больше 50, то найти произведение чисел, иначе – уменьшить каждое число в 2 раза".
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    if (max > 50) {
        printf("Произведение: %d\n", a * b * c);
    } else {
        printf("Измененные числа: a = %f, b = %f, c = %f\n", a / 2.0, b / 2.0, c / 2.0);
    }

    return 0;
}
