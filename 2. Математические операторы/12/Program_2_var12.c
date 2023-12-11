//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №12: "Вычислить значение выражения для введённого Х". Выражение: 1.0 / 3.0 * sqrt(fabs(sin(x))) * pow(pow(M_E, 0.12*x), 1.0 / 3.0). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = 1.0 / 3.0 * sqrt(fabs(sin(x))) * pow(pow(M_E, 0.12*x), 1.0 / 3.0);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}