//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №28: "Вычислить значение выражения для введённого Х". Выражение: (log(pow(x, 2)) + M_PI) / exp(5.0 / 3.0) - x * tan(x / sqrt(M_E)) + 1.4. Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (log(pow(x, 2)) + M_PI) / exp(5.0 / 3.0) - x * tan(x / sqrt(M_E)) + 1.4;

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}