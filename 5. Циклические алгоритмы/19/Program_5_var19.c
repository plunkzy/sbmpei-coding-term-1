//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №19: "Вычислить: 1+2+4+8+…+256."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int terms = 9; // 1,2,4,8,16,32,64,128,256 - 9 членов
    long long sum = 0;

    printf("Вычисление суммы: ");
    for(int i = 0; i < terms; i++) {
        long long term = pow(2, i);
        sum += term;
        printf("%lld", term);
        if(i < terms -1) {
            printf(" + ");
        }
    }
    printf(" = %lld\n", sum);

    return 0;
}
