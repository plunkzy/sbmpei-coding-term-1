//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №11: "Ввести три действительных числа. Вывести те из них, которые дальше всего от 5.".
// Опубликовано 23.03.2024
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double num1, num2, num3, dist1, dist2, dist3, max_dist;

    printf("Введите первое число: ");
    scanf("%lf", &num1);

    printf("Введите второе число: ");
    scanf("%lf", &num2);

    printf("Введите третье число: ");
    scanf("%lf", &num3);

    dist1 = fabs(num1 - 5);
    dist2 = fabs(num2 - 5);
    dist3 = fabs(num3 - 5);

    max_dist = fmax(fmax(dist1, dist2), dist3);

    printf("Числа, наиболее удаленные от 5: ");

    if (dist1 == max_dist)
        printf("%.2lf ", num1);

    if (dist2 == max_dist)
        printf("%.2lf ", num2);

    if (dist3 == max_dist)
        printf("%.2lf ", num3);

    printf("\n");

    return 0;
}