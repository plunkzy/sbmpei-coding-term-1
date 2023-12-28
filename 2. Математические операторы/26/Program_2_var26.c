//
// Лабораторная работа №2 "Математические операторы".
// Решение задачи №26: "Вычислить значение выражения для введённого Х". Выражение: 2 * exp(sqrt(fabs(pow(x, 2) - pow(1.71, 2)))) - pow((x - M_PI) / (x + M_PI), 2). Подробный (и, что не менее важно, читаемый) пример на странице 7 задачника.
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

    result = 2 * exp(sqrt(fabs(pow(x, 2) - pow(1.71, 2)))) - pow((x - M_PI) / (x + M_PI), 2);

    printf("Результат выражения для x = %f равен %f\n", x, result);

    return 0;
}