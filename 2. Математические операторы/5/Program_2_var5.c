//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №5: "Вычислить значение выражения для введённого Х". Выражение: sqrt(pow(M_E, fabs(sin(x)))) + 2*log(3*x) - 1.0 / 9.0. Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
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

    result = sqrt(pow(M_E, fabs(sin(x)))) + 2*log(3*x) - 1.0 / 9.0;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}