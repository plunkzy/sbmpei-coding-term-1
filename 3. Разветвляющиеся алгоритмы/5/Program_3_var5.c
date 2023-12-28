//
// Лабораторная работа №3 "Разветвляющиеся алгоритмы".
// Решение задачи №5: "Ввести три действительных числа. Вывести те из них, которые ближе всего к 10" [plunkzy: положим, что предлагается вывести одно из трёх чисел].
// Опубликовано 28.12.2023
// plunkzy education
//

#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double a, b, c;
    printf("Введите три действительных числа: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double diffA = fabs(10 - a);
    double diffB = fabs(10 - b);
    double diffC = fabs(10 - c);

    printf("Число, ближайшее к 10: ");
    if (diffA < diffB) {
        if (diffA < diffC) printf("%lf ", a);
        else if (diffC < diffA) printf("%lf ", c);
        else printf("%lf %lf ", a, c);
    } else if (diffB < diffA) {
        if (diffB < diffC) printf("%lf ", b);
        else if (diffC < diffB) printf("%lf ", c);
        else printf("%lf %lf ", b, c);
    } else {
        printf("%lf %lf %lf ", a, b, c);
    }

    return 0;
}
