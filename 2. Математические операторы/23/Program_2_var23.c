//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №23: "Вычислить значение выражения для введённого Х". Выражение: (log(sqrt(exp(0.1 * x) + x))) / (x + pow(10.7, 1.0 / 3.0) + tan(x)) + 2.0 / 5.0. Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (log(sqrt(exp(0.1 * x) + x))) / (x + pow(10.7, 1.0 / 3.0) + tan(x)) + 2.0 / 5.0;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}