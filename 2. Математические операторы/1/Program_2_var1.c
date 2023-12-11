//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №1: "Вычислить значение выражения для введённого Х". Выражение: sqrt(pow(M_E, 2.2 * x)) - fabs(sin(M_PI * x / (x + 2.0/3.0))) + 1.7. Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
// Опубликовано 11.12.2023
// plunkzy education
//

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double x, result;
    printf("Введите x: ");
    scanf("%lf", &x);

    result = sqrt(pow(M_E, 2.2 * x)) - fabs(sin(M_PI * x / (x + 2.0/3.0))) + 1.7;

    printf("Результат выражения для x = %f равен %f\\n", x, result);

    return 0;
}