//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №13: "Вычислить значение выражения для введённого Х". Выражение: (pow(pow(M_E, 2.0 / 3.0 - x), 1.0 / 5.0)) / (sqrt(pow(x, 2) + pow(x, 4) + log(fabs(x - 3.4)))). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = (pow(pow(M_E, 2.0 / 3.0 - x), 1.0 / 5.0)) / (sqrt(pow(x, 2) + pow(x, 4) + log(fabs(x - 3.4))));

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}