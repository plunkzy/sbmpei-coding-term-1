//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №4: "Вычислить значение выражения для введённого Х". Выражение: (sqrt(x) * sin(pow(x, 2) / 2) - 1.3) / (pow(x, 1.0/ 5.0) + pow(M_E, 3*x) + fabs(cos(x))). Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
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

    result = (sqrt(x) * sin(pow(x, 2) / 2) - 1.3) / (pow(x, 1.0/ 5.0) + pow(M_E, 3*x) + fabs(cos(x)));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}