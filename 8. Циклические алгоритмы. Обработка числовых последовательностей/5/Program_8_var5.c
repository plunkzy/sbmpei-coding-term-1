//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №5: "Ввести N чисел. Определить, является ли введенная последовательность геометрической прогрессией с первым членом A и знаменателем B."
// Опубликовано 04.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int N;
    double A, B;
    double number;
    int is_geom_prog = 1;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    printf("Введите первый член A: ");
    scanf("%lf", &A);
    printf("Введите знаменатель B: ");
    scanf("%lf", &B);

    if(B == 0) {
        printf("Ошибка: знаменатель не может быть равен нулю.\n");
        return 1;
    }

    double expected = A;

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%lf", &number);
        if(fabs(number - expected) > 1e-6) { // Погрешность для сравнения double
            is_geom_prog = 0;
        }
        expected *= B;
    }

    if(is_geom_prog) {
        printf("Последовательность является геометрической прогрессией с первым членом %.2lf и знаменателем %.2lf.\n", A, B);
    } else {
        printf("Последовательность не является геометрической прогрессией с заданными параметрами.\n");
    }

    return 0;
}