//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №7: "Вычислить значение выражения для введённого Х". Выражение: (sqrt(1.0 / 5.0 + pow(pow(M_E, x), 1.0 / 5.0))) / (fabs(log(pow(x, 2)) - 1.3)). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (sqrt(1.0 / 5.0 + pow(pow(M_E, x), 1.0 / 5.0))) / (fabs(log(pow(x, 2)) - 1.3));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}