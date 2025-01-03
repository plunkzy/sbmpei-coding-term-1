//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №29: "Около стены наклонно стоит палка длиной A м. Один ее конец находится на расстоянии B от стены. Определить значение угла α между палкой и полом для B, изменяющегося от 2 м до 3 м с шагом H м."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double A, H;
    double B;

    printf("Введите длину палки A (м): ");
    scanf("%lf", &A);
    printf("Введите шаг изменения B (м): ");
    scanf("%lf", &H);

    if(H <= 0) {
        printf("Ошибка: шаг H должен быть положительным.\n");
        return 1;
    }

    printf("B (м)\tУгол α (градусы)\n");
    printf("---------------------------\n");

    for(B = 2.0; B <= 3.0; B += H) {
        if(B > A) {
            printf("%.2lf\tНедопустимо (B > A)\n", B);
            continue;
        }
        double alpha_rad = acos(B / A);
        double alpha_deg = alpha_rad * (180.0 / M_PI);
        printf("%.2lf\t%.2lf°\n", B, alpha_deg);
    }

    return 0;
}