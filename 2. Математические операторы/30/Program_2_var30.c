//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №30: "Вычислить значение выражения для введённого Х". Выражение: (fabs(7.2 - 10 * x)) / (pow(x / 9.0 + exp(2 * x), 1.0 / 3.0)) * tan(4.0 * tan(2 * x) / sqrt(1.1 * pow(x, 3))). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (fabs(7.2 - 10 * x)) / (pow(x / 9.0 + exp(2 * x), 1.0 / 3.0)) * tan(4.0 * tan(2 * x) / sqrt(1.1 * pow(x, 3)));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}