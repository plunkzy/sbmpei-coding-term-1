//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №14: "Вычислить значение выражения для введённого Х". Выражение: (sqrt(pow(sin(x / 2), 3)) + pow(pow(M_E, 1.3*x) + pow(M_E, -1.3*x), 1.0 / 3.0)) / (fabs(x - 7.0 / 9.0)). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (sqrt(pow(sin(x / 2), 3)) + pow(pow(M_E, 1.3*x) + pow(M_E, -1.3*x), 1.0 / 3.0)) / (fabs(x - 7.0 / 9.0));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}