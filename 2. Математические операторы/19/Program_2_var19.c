//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №19: "Вычислить значение выражения для введённого Х". Выражение: (log(sqrt(M_PI + fabs(2.0 - x)))) / (3.0 - 1.0 / x) + pow(x, 2.0 / 3.0)*sin(1.4 * x). Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
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

    result = (log(sqrt(M_PI + fabs(2.0 - x)))) / (3.0 - 1.0 / x) + pow(x, 2.0 / 3.0)*sin(1.4 * x);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}