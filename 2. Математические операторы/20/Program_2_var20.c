//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №20: "Вычислить значение выражения для введённого Х". Выражение: (pow(log(x), 2.0 / 3.0) + tan(cos(M_PI * x))) * fabs(log(x / 10.5)). Подробный (и, что не менее важно, читаемый) пример на странице 6 задачника.
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

    result = (pow(log(x), 2.0 / 3.0) + tan(cos(M_PI * x))) * fabs(log(x / 10.5));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}