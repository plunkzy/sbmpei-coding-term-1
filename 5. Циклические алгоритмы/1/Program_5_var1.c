//
// Лабораторная работа №5 "Циклические алгоритмы".
// Решение задачи №1: "Создайте программу для пересчета миль в километры (1 миля – 1,609344 км) от 1 до 50 миль."
// Опубликовано 03.01.2025
// plunkzy education
//

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double miles, kilometers;
    int i;

    printf("Мили\tКилометры\n");
    printf("---------------------\n");

    for(i = 1; i <= 50; i++) {
        miles = i;
        kilometers = miles * 1.609344;
        printf("%d\t%.6lf\n", i, kilometers);
    }

    return 0;
}
