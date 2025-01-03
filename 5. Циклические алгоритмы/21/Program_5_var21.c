//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №21: "Вычислить A*B, не пользуясь операцией умножения."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int A, B;
    int product = 0;

    printf("Введите два целых числа A и B: ");
    scanf("%d %d", &A, &B);

    // Определяем знак результата
    int sign = 1;
    if((A < 0 && B > 0) || (A > 0 && B < 0)) {
        sign = -1;
    }

    // Берем абсолютные значения
    if(A < 0) A = -A;
    if(B < 0) B = -B;

    for(int i = 0; i < B; i++) {
        product += A;
    }

    product *= sign;

    printf("Произведение %d и %d равно %d\n", A * (sign > 0 ? 1 : -1), B * (sign > 0 ? 1 : -1), product);

    return 0;
}
