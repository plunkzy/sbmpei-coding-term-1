//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №17: "Вычислить значение выражения для введённого Х". Выражение: pow(pow(M_PI, 2) - pow(x, 2) + 1 / M_E, 1.0 / 3.0) + tan((x - 1) / x) + 1.0 / 7.0. Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
// Опубликовано 28.12.2023
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

    result = pow(pow(M_PI, 2) - pow(x, 2) + 1 / M_E, 1.0 / 3.0) + tan((x - 1) / x) + 1.0 / 7.0;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}