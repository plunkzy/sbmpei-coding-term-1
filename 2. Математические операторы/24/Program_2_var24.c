//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №24: "Вычислить значение выражения для введённого Х". Выражение: 1.0 / 3.0 * pow(exp(6.3 + sqrt(x)), 1.0 / 7.0) * fabs(cos(2 * x / 3) - x). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = 1.0 / 3.0 * pow(exp(6.3 + sqrt(x)), 1.0 / 7.0) * fabs(cos(2 * x / 3) - x);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}