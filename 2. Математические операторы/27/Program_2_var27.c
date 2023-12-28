//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №27: "Вычислить значение выражения для введённого Х". Выражение: (8.0 / 3.0 + pow(x / 2.7, 1.0 / 3.0) - sqrt(exp(-3.0 * x))) * fabs(sin(5 * x)). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (8.0 / 3.0 + pow(x / 2.7, 1.0 / 3.0) - sqrt(exp(-3.0 * x))) * fabs(sin(5 * x));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}