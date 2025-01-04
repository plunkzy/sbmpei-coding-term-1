//
// Лабораторная работа №8 "Циклические алгоритмы. Обработка числовых последовательностей".
// Решение задачи №23: "Ввести N чисел. Определить, является ли введенная последовательность арифметической прогрессией с первым членом A и разностью B."
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
    int is_arith_prog = 1;
    double expected;

    printf("Введите количество чисел N: ");
    scanf("%d", &N);

    if(N <= 0) {
        printf("Ошибка: количество должно быть положительным.\n");
        return 1;
    }

    printf("Введите первый член A: ");
    scanf("%lf", &A);
    printf("Введите разность B: ");
    scanf("%lf", &B);

    expected = A;

    for(int i = 1; i <= N; i++) {
        printf("Введите число #%d: ", i);
        scanf("%lf", &number);
        if(fabs(number - expected) > 1e-6) { // Используем эпсилон для сравнения вещественных чисел
            is_arith_prog = 0;
            // Не прерываем цикл, чтобы продолжить ввод чисел
        }
        expected += B;
    }

    if(is_arith_prog) {
        printf("Последовательность является арифметической прогрессией с первым членом %.2lf и разностью %.2lf.\n", A, B);
    } else {
        printf("Последовательность не является арифметической прогрессией с заданными параметрами.\n");
    }

    return 0;
}