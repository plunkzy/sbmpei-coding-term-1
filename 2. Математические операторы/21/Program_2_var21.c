//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №21: "Вычислить значение выражения для введённого Х". Выражение: (sin(0.5 * M_PI * x) + pow(x, 1.0 / 5.0)) / (sqrt(fabs(cos(M_PI * x) + 1)) * pow(M_E, sqrt(x))). Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
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

    result = (sin(0.5 * M_PI * x) + pow(x, 1.0 / 5.0)) / (sqrt(fabs(cos(M_PI * x) + 1)) * pow(M_E, sqrt(x)));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}