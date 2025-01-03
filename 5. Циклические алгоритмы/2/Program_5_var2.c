//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №2 (условие смотрите в сборнике).
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int celsius;
    double fahrenheit;

    printf("Цельсий\tФаренгейт\n");
    printf("-----------------------\n");

    for(celsius = 0; celsius <= 100; celsius++) {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("%d\t%.2lf\n", celsius, fahrenheit);
    }

    return 0;
}
